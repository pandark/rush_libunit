/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_co_itoa_int_min.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:26:54 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/30 17:48:35 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_cobaye.h"

int	co_itoa_int_min(void)
{
	char *ret;

	ret = NULL;
	ret = co_itoa(INT_MIN);
	if (!ft_strcmp(ret, "-2147483648"))
		return (0);
	else
		return (-1);
}
