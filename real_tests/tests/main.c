/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 17:16:30 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/26 15:31:03 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_cobaye.h"

#define NB_TEST 1

static char *g_test[] = {"ft_itoa\0"};

static int (*g_fun[])(void) = {&co_itoa_launcher};

static int		check_tab(char *arg)
{
	int i;
	i = 0;
	while (i < NB_TEST)
	{
		if (!ft_strcmp(arg, g_test[i]))
			return (1 << i);
		i++;
	}
	return (0);
}

static int		parse_flag(int argc, char **argv, long *f)
{
	int i;
	char **arg;

	(void)argc;
	if (!(arg = ft_strsplit(argv[1], ' ')))
		return (0);
	*f = 0;
	i = 0;
	while (arg[i])
	{
		*f |= check_tab(arg[i]);
		i++;
	}
	return (1);
}


int			main(int argc, char **argv)
{
	long	flag;
	int		i;

	ft_dprintf(2, "ARG [%s]\n", argv[1]);
	flag = LONG_MAX;
	if (argv[1])
		parse_flag(argc, argv, &flag);

	i = 0;
	while (i < NB_TEST)
	{
		if (flag & (1 << i))
			(g_fun[i])();
		i++;
	}
	return (0);
}
