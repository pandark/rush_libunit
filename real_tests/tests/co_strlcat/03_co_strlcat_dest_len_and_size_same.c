/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_co_strlcat_dest_len_and_size_same.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 17:35:37 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/26 17:47:24 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_cobaye.h"

int	co_strlcat_dest_len_and_size_same(void)
{
	char dest[50];
	char src[50];
	int ret;

	ft_bzero(dest, 50);
	ft_bzero(src, 50);
	ft_strcpy(dest, "12345");
	ft_strcpy(src, "abc");
	ret = ft_strlcat(dest, src, 5);
	if (!ft_strcmp(dest, "12345") || ret != 8)
		return (0);
	else
		return (-1);
}
