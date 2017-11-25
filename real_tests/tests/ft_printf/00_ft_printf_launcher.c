/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_ft_printf_launcher.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 20:47:54 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/25 22:36:42 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

int	ft_printf_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	write(2, "FT_PRINTF:\n", sizeof("FT_PRINTF:\n"));
	load_test(&testlist, "basic_print", 0, &ft_printf_basic_print);
	load_test(&testlist, "print_d", 0, &ft_printf_print_d);
	load_test(&testlist, "print_d_preci", 0, &ft_printf_print_d_preci);
	load_test(&testlist, "print_wchar_preci_weight", 0, &ft_printf_print_wchar_preci_weight);
	load_test(&testlist, "print_p", 0, &ft_printf_print_p);
	load_test(&testlist, "null", 0, &ft_printf_null);
	load_test(&testlist, "print_s_null_preci", 0, &ft_printf_print_s_null_preci);
	load_test(&testlist, "print_f_0", 0, &ft_printf_print_f_0);
	load_test(&testlist, "print_f_rounded", 0, &ft_printf_print_f_rounded);
	load_test(&testlist, "print_f_preci", 0, &ft_printf_print_f_preci);
	return (launch_tests(&testlist));
}
