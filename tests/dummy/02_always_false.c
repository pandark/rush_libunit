/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_always_false.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 23:00:01 by apachkof          #+#    #+#             */
/*   Updated: 2017/11/25 01:09:30 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dummy.h"

int always_false(void)
{
	if (0)
		return(0);
	else
		return(-1);
}
