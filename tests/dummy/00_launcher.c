/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 23:03:33 by apachkof          #+#    #+#             */
/*   Updated: 2017/11/26 22:04:09 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "dummy.h"
#include "libunit.h"

int	dummy_launcher(void)
{
	t_unit_test *testlist;

	write(2, "\033[36m===============[ DUMMY ]==============>\033[0m\n",
	sizeof("\033[36m===============[ DUMMY ]==============>\033[0m\n"));
	load_test(&testlist, "Always true test", 0, &always_true);
	load_test(&testlist, "Always false test", 0, &always_false);
	load_test(&testlist, "Always segfault test", 0, &always_segv);
	load_test(&testlist, "Always bus error test", 0, &always_buse);
	return (launch_tests(&testlist));
}
