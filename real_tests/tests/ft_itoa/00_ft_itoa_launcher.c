/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_ft_itoa_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:28:01 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/25 21:14:28 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

int	ft_itoa_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	write(2, "FT_ITOA:\n", sizeof("FT_ITOA:\n"));
	load_test(&testlist, "basic", 0, &ft_itoa_basic);
	load_test(&testlist, "basic_negative", 0, &ft_itoa_basic_negative);
	load_test(&testlist, "zero", 0, &ft_itoa_zero);
	load_test(&testlist, "int_max", 0, &ft_itoa_int_max);
	load_test(&testlist, "int_min", 0, &ft_itoa_int_min);
	return (launch_tests(&testlist));
}
