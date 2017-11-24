/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destruct_all_tests.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 22:39:56 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/24 22:51:30 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libunit.h"

void	destruct_all_tests(t_ut **list_tests)
{
	t_ut	*lst;
	t_ut	*cur;

	lst = *list_tests;
	while (lst)
	{
		cur = lst;
		lst = lst->next;
		destruct_test(&cur);
	}
	*list_tests = NULL;
}
