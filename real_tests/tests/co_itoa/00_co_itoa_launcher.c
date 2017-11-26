/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_co_itoa_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 15:22:27 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/26 15:27:37 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_cobaye.h"

int	co_itoa_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	write(2, "CO_ITOA:\n", sizeof("CO_ITOA:\n"));
	load_test(&testlist, "basic", 0, &co_itoa_basic);
	load_test(&testlist, "basic_negative", 0, &co_itoa_basic_negative);
	load_test(&testlist, "zero", 0, &co_itoa_zero);
	load_test(&testlist, "int_max", 0, &co_itoa_int_max);
	load_test(&testlist, "int_min", 0, &co_itoa_int_min);
	return (launch_tests(&testlist));
}
