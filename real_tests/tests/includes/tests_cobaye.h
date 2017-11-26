/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_cobaye.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 16:58:47 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/26 18:11:33 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_COBAYE_H
# define TESTS_COBAYE_H

# include "libunit.h"
# include "cobaye.h"
# include <limits.h>
# include <stdio.h>

# define NB_TEST 3

/*
**		CO_ITOA
*/

int		co_itoa_launcher(void);

int		co_itoa_basic(void);
int		co_itoa_basic_negative(void);
int		co_itoa_zero(void);
int		co_itoa_int_max(void);
int		co_itoa_int_min(void);

/*
**		CO_PUTNBR
*/

int		co_putnbr_launcher(void);

int		co_putnbr_basic(void);
int		co_putnbr_negative(void);
int		co_putnbr_zero(void);
int		co_putnbr_int_max(void);
int		co_putnbr_int_min(void);

/*
**		CO_STRLCAT
*/

int		co_strlcat_launcher(void);
int		co_strlcat_basic(void);
int		co_strlcat_size_0(void);
int		co_strlcat_dest_bigger_than_size(void);
int		co_strlcat_dest_len_and_size_same(void);
int		co_strlcat_size_bigger_then_len_src(void);

#endif
