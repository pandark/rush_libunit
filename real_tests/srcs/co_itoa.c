/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   co_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 15:18:47 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/26 16:43:15 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cobaye.h"

static	int	count_number(long long int n)
{
	int i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*co_itoa(long long int nb)
{
	int			i;
	char		*str;

	i = count_number(nb) - 1;
	str = malloc(count_number(nb));
	if (str == NULL)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb != 0)
	{
		str[i] = nb % 10 + '0';
		i--;
		nb = nb / 10;
	}
	return (str);
}
