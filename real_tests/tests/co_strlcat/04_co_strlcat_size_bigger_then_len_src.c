/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_co_strlcat_size_bigger_then_len_src.c           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 17:44:19 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/26 18:56:00 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_cobaye.h"

int	co_strlcat_size_bigger_then_len_src(void)
{
	char	dest[50];
	char	src[50];
	int		ret;

	ft_bzero(dest, 50);
	ft_bzero(src, 50);
	ft_strcpy(dest, "12345");
	ft_strcpy(src, "abc");
	ret = co_strlcat(dest, src, 50000);
	if (!ft_strcmp(dest, "12345abc") && ret == 8)
		return (0);
	else
		return (-1);
}
