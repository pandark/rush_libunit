/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_ft_itoa_int_min.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:26:54 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/25 18:27:00 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

int	ft_itoa_int_min(void)
{
	char *ret;

	ret = NULL;
	ret = ft_itoa(INT_MIN);
	if (!ft_strcmp(ret, "-2147483648"))
		return (0);
	else
		return (-1);
}
