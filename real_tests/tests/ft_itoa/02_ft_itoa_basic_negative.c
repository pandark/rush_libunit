/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ft_itoa_basic_negative.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:26:26 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/25 18:26:28 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

int	ft_itoa_basic_negative(void)
{
	char *ret;

	ret = NULL;
	ret = ft_itoa(-12345);
	if (!ft_strcmp(ret, "-12345"))
		return (0);
	else
		return (-1);
}
