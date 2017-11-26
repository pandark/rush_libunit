/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_co_strlcat_dest_bigger_than_size.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 17:35:25 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/26 17:46:57 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_cobaye.h"

int	co_strlcat_dest_bigger_than_size(void)
{
	char dest[50];
	char src[50];
	int ret;

	ft_bzero(dest, 50);
	ft_bzero(src, 50);
	ft_strcpy(dest, "123456789");
	ft_strcpy(src, "abc");
	ret = ft_strlcat(dest, src, 5);
	if (!ft_strcmp(dest, "123456789") || ret != 8)
		return (0);
	else
		return (-1);
}
