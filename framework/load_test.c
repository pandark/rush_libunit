/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 23:13:32 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/24 23:48:18 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libunit.h"

static void	add_test(t_ut **list_tests, t_ut *unit_test)
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
void		load_test(t_ut **list_tests, char *name, int (*f)(void))
{
	t_ut	*unit_test;

	if (!(unit_test = ft_memalloc(sizeof(t_ut))))
		return ;

	unit_test->f = f;
	unit_test->name = ft_strdup(name);//max_size ?

	add_test(list_tests, unit_test);
}
