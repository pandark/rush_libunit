/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_always_buse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 23:02:28 by apachkof          #+#    #+#             */
/*   Updated: 2017/11/25 08:59:27 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int always_buse(void)
{
	char *s = "this is ";
	char *s1 = "me";  

	ft_strcat(s, s1); 
	if (*s == *"this is me")
		return(0);
	else
		return(-1);
}
