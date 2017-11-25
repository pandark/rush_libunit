/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 20:57:40 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/25 11:48:53 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H

# define LIBUNIT_H

# define RAZ_COLO "\033[0m"
# define RED_COLO "\033[31m"
# define GRN_COLO "\033[32m"
# define BLD_RED  "\033[1m\033[31m"
# define BLD_GRN  "\033[1m\033[32m"

typedef struct			s_unit_test
{
	char				*name;
	char				flag;
	int					(*f)(void);

	struct s_unit_test	*next;
}						t_unit_test;

void					load_test(t_unit_test **tests, char *name, char flag, \
		int (*f)(void));
int						launch_tests(t_unit_test **tests);

#endif
