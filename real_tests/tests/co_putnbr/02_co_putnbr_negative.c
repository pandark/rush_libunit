/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_co_putnbr_negative.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 16:56:01 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/26 18:08:49 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_cobaye.h"

int		co_putnbr_negative(void)
{
	char	buffer[UT_SIZE + 1];

	ft_bzero(buffer, UT_SIZE);
	co_putnbr(-123);
	read(get_fd_out(), buffer, UT_SIZE);
	if (!ft_strcmp("-123", buffer))
		return (0);
	return (-1);
}
