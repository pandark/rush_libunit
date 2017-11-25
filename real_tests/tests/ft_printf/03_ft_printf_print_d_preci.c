/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_ft_printf_print_d_preci.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 22:14:42 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/25 22:34:42 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

int		ft_printf_print_d_preci(void)
{
	char	buffer[UT_SIZE + 1];
	char 	buffer2[UT_SIZE + 1];
	int		ret;
	int		ret2;

	ft_bzero(buffer, UT_SIZE);
	ft_bzero(buffer2, UT_SIZE);

	ft_printf("Salut ! %.3i", 1234568);
	ret = read(get_fd_out(), buffer, UT_SIZE);
	ret2 = dprintf(1, "Salut ! %.3i", 1234568);
	read(get_fd_out(), buffer2, UT_SIZE);

	if (!ft_strcmp(buffer2, buffer) || ret != ret2)
		return (0);

	ft_bzero(buffer, UT_SIZE);
	ft_bzero(buffer2, UT_SIZE);

	ft_printf("Salut ! %.0i", 1234568);
	ret = read(get_fd_out(), buffer, UT_SIZE);
	ret2 = dprintf(1, "Salut ! %.0i", 1234568);
	read(get_fd_out(), buffer2, UT_SIZE);

	if (!ft_strcmp(buffer2, buffer) || ret != ret2)
		return (0);

	ft_bzero(buffer, UT_SIZE);
	ft_bzero(buffer2, UT_SIZE);

	ft_printf("Salut ! %.3i", 12);
	ret = read(get_fd_out(), buffer, UT_SIZE);
	ret2 = dprintf(1, "Salut ! %.3i", 12);
	read(get_fd_out(), buffer2, UT_SIZE);

	if (!ft_strcmp(buffer2, buffer) || ret != ret2)
		return (0);

	ft_bzero(buffer, UT_SIZE);
	ft_bzero(buffer2, UT_SIZE);

	ft_printf("Salut ! %.100i", 1234568);
	ret = read(get_fd_out(), buffer, UT_SIZE);
	ret2 = dprintf(1, "Salut ! %.100i", 1234568);
	read(get_fd_out(), buffer2, UT_SIZE);

	if (!ft_strcmp(buffer2, buffer) || ret != ret2)
		return (0);
	return (-1);
}
