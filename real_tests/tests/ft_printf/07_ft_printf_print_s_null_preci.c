/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_ft_printf_print_s_null_preci.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 22:15:07 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/26 14:51:45 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

int		ft_printf_print_s_null_preci(void)
{
	char	buffer[UT_SIZE + 1];
	char	buffer2[UT_SIZE + 1];
	int		ret;
	int		ret2;

	ft_bzero(buffer, UT_SIZE);
	ft_bzero(buffer2, UT_SIZE);
	ret = ft_printf("[%.2s]", NULL);
	read(get_fd_out(), buffer, UT_SIZE);
	ret2 = dprintf(1, "[%.2s]", NULL);
	read(get_fd_out(), buffer2, UT_SIZE);
	if (!ft_strcmp(buffer2, buffer) || ret != ret2)
		return (0);
	return (-1);
}
