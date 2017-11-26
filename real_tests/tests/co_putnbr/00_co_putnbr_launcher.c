/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_co_putnbr_launcher.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 20:47:54 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/26 20:55:57 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_cobaye.h"

int	co_putnbr_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	write(2, "\033[36m===============[CO_PUTNBR]==============>\033[0m\n",
	sizeof("\033[36m===============[CO_PUTNBR]==============>\033[0m\n"));
	load_test(&testlist, "basic", 0, &co_putnbr_basic);
	//load_test(&testlist, "negative", 0, &co_putnbr_negative);
	load_test(&testlist, "zero", 0, &co_putnbr_zero);
	load_test(&testlist, "int_max", 0, &co_putnbr_int_max);
	//load_test(&testlist, "int_min", 0, &co_putnbr_int_min);
	return (launch_tests(&testlist));
}
