/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 17:16:30 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/26 20:53:24 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_cobaye.h"

static char *g_test[] = {"co_itoa\0", "co_putnbr", "co_strlcat"};

static int (*g_fun[])(void) = {&co_itoa_launcher, \
	&co_putnbr_launcher, \
	&co_strlcat_launcher};

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
	int		i;
	char	**arg;

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

int				main(int argc, char **argv)
{
	long	flag;
	int		i;
	int		ret;

	ft_dprintf(2, "ARG [%s]\n", argv[1]);
	flag = LONG_MAX;
	if (argv[1])
		parse_flag(argc, argv, &flag);
	ret = 0;
	i = 0;
	while (i < NB_TEST)
	{
		if (flag & (1 << i))
			ret = ((g_fun[i])() == 0) ? ret : -1;
		i++;
	}
	return (ret);
}
