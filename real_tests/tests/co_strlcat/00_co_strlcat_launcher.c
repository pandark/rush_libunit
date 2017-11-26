/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_co_strlcat_launcher.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 15:22:27 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/26 18:56:12 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_cobaye.h"

int	co_strlcat_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	write(2, "\033[36m===============[CO_STRLCAT]==============>\033[0m\n",
	sizeof("\033[36m===============[CO_STRLCAT]==============>\033[0m\n"));
	load_test(&testlist, "basic", 0, &co_strlcat_basic);
	load_test(&testlist, "size_0", 0, &co_strlcat_size_0);
	load_test(&testlist, "dest_bigger_than_size", 0,
							&co_strlcat_dest_bigger_than_size);
	load_test(&testlist, "dest_len_and_size_same", 0,
							&co_strlcat_dest_len_and_size_same);
	load_test(&testlist, "size_bigger_then_len_src", 0,
							&co_strlcat_size_bigger_then_len_src);
	return (launch_tests(&testlist));
}
