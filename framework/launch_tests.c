/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 22:56:40 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/25 07:26:11 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/wait.h>
#include <signal.h>
#include <stdlib.h>
#include "ft_printf.h"
#include "libunit.h"

static char		*g_signals[] = {"HUP", "INT", "QUIT", "ILL", "TRAP", "ABRT",
	"EMT", "FPE", "KILL", "BUS", "SEGV", "SYS", "PIPE", "ALRM", "TERM", "URG",
	"STOP", "TSTP", "CONT", "CHLD", "TTIN", "TTOU", "IO", "XCPU", "XFSZ",
	"VTALRM", "PROF", "WINCH", "INFO", "USR1", "USR2"};

static int		test_signaled(t_unit_test *test)
{
	int			status;
	int			ret;

	ret = WTERMSIG(status);
	if (ret >= 1 && ret <= 31)
		ft_dprintf(2, "> %s : [%s]\n", test->name, g_signals[ret - 1]);
	else
		ft_dprintf(2, "Signal inconnu || Valeur de retour : %i\n", ret);
	return (EXIT_FAILURE);
}

static int		get_result(t_unit_test *test)
{
	int			status;
	int			ret;

	status = 0;
	wait(&status);
	if (WIFEXITED(status))
	{
		ret = WEXITSTATUS(status);
		if (ret == EXIT_SUCCESS)
			ft_dprintf(2, "> %s : [OK]\n", test->name);
		else
			ft_dprintf(2, "> %s : [KO]\n", test->name);
	}
	else if (WIFSIGNALED(status))
	{
		ret = test_signaled(test);
	}
	else
	{
		ft_dprintf(2, "WTF ?\n");
		ret = EXIT_FAILURE;
	}
	return (ret);
}

static int		launch_test(t_unit_test *test)
{
	pid_t		pid;

	pid = fork();
	if (pid == -1)
	{
		ft_dprintf(2, "Erreur lors de la création du processus\n");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		if (test->f() == 0)
			exit(EXIT_SUCCESS);
		else
			exit(EXIT_FAILURE);
	}
	else
	{
		return get_result(test);
	}
}

int				launch_tests(t_unit_test **tests)
{
	t_unit_test	*to_be_freed;
	int			ret;

	ret = 0;
	while (*tests != NULL)
	{
		ret = (launch_test(*tests) == 0 && ret == 0) ? 0 : -1;
		to_be_freed = *tests;
		*tests = (*tests)->next;
		free(to_be_freed);
	}
	return (ret);
}
