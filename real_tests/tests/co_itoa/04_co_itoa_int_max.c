/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_co_itoa_int_max.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:26:44 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/26 15:28:13 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_cobaye.h"

int	co_itoa_int_max(void)
{
	char *ret;

	ret = NULL;
	ret = co_itoa(2147483647);
	if (!ft_strcmp(ret, "2147483647"))
		return (0);
	else
		return (-1);
}
