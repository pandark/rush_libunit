/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_ft_printf_launcher.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 20:47:54 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/25 21:14:40 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

int	ft_printf_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	write(2, "FT_PRINTF:\n", sizeof("FT_PRINTF:\n"));
	load_test(&testlist, "basic_print", 0,
				&ft_printf_basic_print);
	return (launch_tests(&testlist));
}
