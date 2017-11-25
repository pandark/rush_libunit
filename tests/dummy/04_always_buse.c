/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_always_buse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 23:02:28 by apachkof          #+#    #+#             */
/*   Updated: 2017/11/25 01:15:46 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dummy.h"
#include <stdlib.h>

int always_buse(void)
{
	int *iptr;
	char *cptr;

	cptr = malloc(sizeof(int) + 1);
	++cptr;
	iptr = (int *)cptr;
	*iptr = 42;
	if (*iptr == 42)
		return(0);
	else
		return(-1);
}
