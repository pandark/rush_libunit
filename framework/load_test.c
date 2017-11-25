/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 23:13:32 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/25 21:14:10 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libunit.h"

void	load_test(t_unit_test **tests, char *name, char flag, int (*f)(void))
{
	t_unit_test	*test;
	t_unit_test	*cur;

	if ((test = malloc(sizeof(*test))) == NULL)
		exit(EXIT_FAILURE);
	test->name = name;
	test->flag = flag;
	test->f = f;
	test->next = NULL;
	cur = *tests;
	if (tests == NULL || *tests == NULL)
	{
		*tests = test;
	ft_dprintf(2, "AAAAABBBBB\n");
	}
	else
	{
		while (cur->next != NULL)
			cur = cur->next;
		cur->next = test;
	}
}

int		redirect_stdout_to_pipe(int *fd)
{
	if (pipe(fd) != 0)
		return (0);
	dup2(fd[1], 1);
	return (1);
}

void		close_pipe(int *fd)
{
	close(fd[0]);
	close(fd[1]);
}

int			*get_fd(void)
{
	static int fd[2] = {0, 0};

	return (fd);
}

int			get_fd_out(void)
{
	int *fd;

	fd = get_fd();

	return (fd[0]);
}

int			get_fd_in(void)
{
	int *fd;

	fd = get_fd();

	return (fd[1]);
}
