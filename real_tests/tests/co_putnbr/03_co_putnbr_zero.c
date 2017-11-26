/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_co_putnbr_zero.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 16:58:59 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/26 18:08:26 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_cobaye.h"

int	co_putnbr_zero(void)
{
	char	buffer[UT_SIZE + 1];

	ft_bzero(buffer, UT_SIZE);
	co_putnbr(0);
	read(get_fd_out(), buffer, UT_SIZE);
	if (!ft_strcmp("0", buffer))
		return (0);
	return (-1);
}
