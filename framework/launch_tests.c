/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 22:56:40 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/24 23:44:35 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libunit.h"

void		launch_tests(t_ut **list_tests)
{
	t_ut	*lst;
	pid_t	pid;
	int		status;
	int		ret;

	lst = *list_tests;

	while (lst)
	{
		pid = fork();
		if (pid == -1)
		{
			ft_dprintf(2, "Erreur lors de la création du processus\n");
			exit(EXIT_FAILURE);
		}
		else if (pid == 0)
		{
			if (lst->f())
				exit(EXIT_SUCCESS);
			else
				exit(EXIT_FAILURE);
		}
		else
		{
			status = 0;
			wait(&status);
			if (WIFEXITED(status)) // true si Child return/exit [NORMAL]
			{
				ret = WEXITSTATUS(status); // renvois le code de retour
				ft_dprintf(2, "Arret du fils normal [RETURN/EXIT] || Valeur de retour : %i\n", ret);
			}
			else if (WIFSIGNALED(status)) // true si Child signal
			{
				ret = WTERMSIG(status); //revois la value du signal
				ft_dprintf(2, "Arret du fils Anormal [BUSE/SIG...] || Valeur de retour : %i\n", ret);
			}
			else
			{
				ft_dprintf(2, "Wtf ?\n");
			}
		}
		lst = lst->next;
	}

	destruct_all_tests(list_tests);
}
