/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_co_itoa_zero.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:26:38 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/26 15:28:03 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_cobaye.h"

int	co_itoa_zero(void)
{
	char *ret;

	ret = NULL;
	ret = co_itoa(0);
	if (!ft_strcmp(ret, "0"))
		return (0);
	else
		return (-1);
}
