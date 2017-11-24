/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 23:44:42 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/24 23:49:00 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libunit.h"

int		test_true(void)
{
	return (1);
}

int		test_false(void)
{
	return (0);
}

int main()
{
	t_ut 	*l;

	l = NULL;

	load_test(&l, "test naze", &test_false);
	load_test(&l, "test naze", &test_true);
	launch_tests(&l);
}
