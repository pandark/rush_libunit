/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 22:56:40 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/24 23:30:08 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libunit.h"

void		launch_tests(t_ut **list_tests)
{
	t_ut	*lst;
	pid_t	pid;

	lst = *list_tests;

	while (lst)
	{
		pid = fork();
		if (pid == -1)
		{
			//erreur lors du fork
		}
		else if (pid == 0)
		{
			//run test
			exit(0);
		}
		else
		{
			wait();//waiting child end // need listen
		}

		lst = lst->next;
	}

	destruct_all_tests(list_tests);
}
