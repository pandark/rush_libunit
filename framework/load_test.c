/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 21:12:00 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/24 21:48:32 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libunit.h"

static void	ut_add_test(t_ut **list_tests, t_ut *unit_test)
{
	t_ut	*lst;

	if (!*list_tests)
		*list_tests = unit_test;
	else
	{
		lst = *list_tests;
		while (lst->next)
			lst = lst->next;
		lst->next = unit_test;
	}
}

//bool for return false ?
void		ut_load_test(t_ut **list_tests, int (*f)(void *), char *name)
{
	t_ut	*unit_test;

	if (!(unit_test = ft_memalloc(sizeof(t_ut))))
		return ;

	unit_test->f = f;
	unit_test->name = ft_strdup(name);//max_size ?

	ut_add_test(list_tests, unit_test);
}
