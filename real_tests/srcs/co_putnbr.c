/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   co_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 12:22:06 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/26 16:53:36 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cobaye.h"

static void	co_putchar(char c)
{
	write(1, &c, 1);
}

void		co_putnbr(long int n)
{
	long int nb;

	nb = n;
	if (nb < 0)
	{
		co_putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
	{
		co_putnbr(nb / 10);
		co_putchar((nb % 10) + 48);
	}
	else
		co_putchar(nb + 48);
}
