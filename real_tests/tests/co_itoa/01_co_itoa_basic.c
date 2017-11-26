/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_co_itoa_basic.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:26:00 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/26 15:27:14 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_cobaye.h"

int	co_itoa_basic(void)
{
	char *ret;

	ret = NULL;
	ret = co_itoa(12345);
	if (!ft_strcmp(ret, "12345"))
		return (0);
	else
		return (-1);
}
