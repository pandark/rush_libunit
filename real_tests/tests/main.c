/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 17:16:30 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/25 21:20:14 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

#define NB_TEST 2

static char *g_test[] = {"ft_itoa\0", "ft_printf\0"};

static int (*g_fun[])(void) = {&ft_itoa_launcher,
							&ft_printf_launcher};

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
