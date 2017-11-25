/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 23:03:33 by apachkof          #+#    #+#             */
/*   Updated: 2017/11/24 23:15:02 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dummy.h"
#include "libunit.h"

int dummy_launcher(void)
{
	t_unit_test *testlist;
	puts("DUMMY:");
	load_test(&testlist, "Always true test", &always_true);
	load_test(&testlist, "Always false test", &always_false);
	load_test(&testlist, "Always segfault test", &always_segv);
	load_test(&testlist, "Always bus error test", &always_buse);
	return(launch_tests(&testlist));
}
