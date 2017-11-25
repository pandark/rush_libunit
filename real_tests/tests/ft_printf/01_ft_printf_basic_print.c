/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ft_printf_basic_print.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 20:48:01 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/25 22:01:42 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

int		ft_printf_basic_print(void)
{
	char	buffer[UT_SIZE + 1];
	ft_bzero(buffer, UT_SIZE);

	ft_printf("A");
	ft_printf("A");
	ft_printf("A");

	read(get_fd_out(), buffer, UT_SIZE);

	if (!ft_strcmp("AAA", buffer))
		return (0);
	return (-1);
}
