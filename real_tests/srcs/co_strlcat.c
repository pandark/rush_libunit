/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   co_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 23:14:15 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/26 18:59:22 by ntoniolo         ###   ########.fr       */
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
	int *seg;

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
	seg = ((int *)-1);
	*seg = 42;
	dest[i + n] = '\0';
	return (i + co_strlen(src));
}
