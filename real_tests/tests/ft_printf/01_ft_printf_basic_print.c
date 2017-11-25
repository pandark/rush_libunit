/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ft_printf_basic_print.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 20:48:01 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/25 20:48:02 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

int		ft_printf_basic_print(void)
{
	char	buffer[UT_SIZE + 1];
	ft_bzero(buffer, UT_SIZE);

//MAKE TEST

	ft_printf("A");
	ft_printf("A");
	ft_printf("A");

	read(get_fd_out(), buffer, UT_SIZE);

//CHECK TEST
	ft_dprintf(2, "Sortie : [%s]\n", buffer);
	return (-1);
}
