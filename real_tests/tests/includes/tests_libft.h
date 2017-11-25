/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_libft.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 16:58:47 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/25 22:17:11 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_LIBFT_H
# define TESTS_LIBFT_H

#include "libft.h"
#include "libunit.h"
#include <limits.h>
#include <stdio.h>

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
int		ft_printf_print_d(void);
int		ft_printf_print_d_preci(void);
int		ft_printf_print_wchar_preci_weight(void);
int		ft_printf_print_p(void);
int		ft_printf_null(void);
int		ft_printf_print_s_null_preci(void);
int		ft_printf_print_f_0(void);
int		ft_printf_print_f_rounded(void);
int		ft_printf_print_f_preci(void);

#endif
