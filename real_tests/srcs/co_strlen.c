/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   co_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:55:23 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/26 17:21:24 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cobaye.h"

size_t	co_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
