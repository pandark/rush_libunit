/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_co_strlcat_size_0.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 17:35:00 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/26 18:55:56 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_cobaye.h"

int	co_strlcat_size_0(void)
{
	char	dest[50];
	char	src[50];
	int		ret;

	ft_bzero(dest, 50);
	ft_bzero(src, 50);
	ft_strcpy(dest, "123");
	ft_strcpy(src, "456");
	ret = co_strlcat(dest, src, 0);
	if (!ft_strcmp(dest, "123") && ret == 3)
		return (0);
	else
		return (-1);
}
