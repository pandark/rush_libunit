/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   co_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 23:14:15 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/30 17:49:51 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cobaye.h"

size_t	co_strlcat(char *dest, const char *src, size_t size)
{
	size_t	left_size;
	size_t	n;
	size_t	i;

	i = 0;
	n = 0;
	left_size = size;
	while (dest[i] != '\0' && left_size != 0)
	{
		left_size--;
		i++;
	}
	if (left_size == 0)
		return (i + co_strlen(src));
	while (src[n] != '\0' && left_size != 1)
	{
		dest[i + n] = src[n];
		n++;
		left_size--;
	}
	dest[i + n] = '\0';
	return (i + co_strlen(src));
}
