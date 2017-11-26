/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_co_putnbr_int_min.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 16:59:45 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/26 17:05:31 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_cobaye.h"

int co_putnbr_int_min(void)
{
	char	buffer[UT_SIZE + 1];

	ft_bzero(buffer, UT_SIZE);
	co_putnbr(-2147483648);
	read(get_fd_out(), buffer, UT_SIZE);

	if (!ft_strcmp("-2147483648", buffer))
		return (0);
	return (-1);
}
