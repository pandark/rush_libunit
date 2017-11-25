/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_ft_itoa_zero.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:26:38 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/25 18:26:39 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

int	ft_itoa_zero(void)
{
	char *ret;

	ret = NULL;
	ret = ft_itoa(0);
	if (!ft_strcmp(ret, "0"))
		return (0);
	else
		return (-1);
}
