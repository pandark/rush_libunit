/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_libft.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 16:58:47 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/25 20:48:17 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_LIBFT_H
# define TESTS_LIBFT_H

#include "libft.h"
#include "libunit.h"
#include <limits.h>

/*
**		FT_ITOA
*/

int		ft_itoa_launcher(void);

int		ft_itoa_basic(void);
int		ft_itoa_basic_negative(void);
int		ft_itoa_zero(void);
int		ft_itoa_int_max(void);
int		ft_itoa_int_min(void);

/*
**		PRINTF
*/

int		ft_printf_launcher(void);

int		ft_printf_basic_print(void);

#endif
