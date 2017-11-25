/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ft_printf_print_d.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 22:02:26 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/25 22:36:36 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

int		ft_printf_print_d(void)
{
	char	buffer[UT_SIZE + 1];
	char 	buffer2[UT_SIZE + 1];
	int		ret;
	int		ret2;

	ft_bzero(buffer, UT_SIZE);
	ft_bzero(buffer2, UT_SIZE);

	ret = ft_printf("Salut ! %d", 123456);
	read(get_fd_out(), buffer, UT_SIZE);
	ret2 = dprintf(1, "Salut ! %d", 123456);
	read(get_fd_out(), buffer2, UT_SIZE);
	if (!ft_strcmp(buffer2, buffer) || ret != ret2)
		return (0);
	return (-1);
}
