/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 20:57:40 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/25 06:55:26 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H

# define LIBUNIT_H

typedef struct			s_unit_test
{
	char				*name;
	char				flag;
	int					(*f)(void);

	struct s_unit_test	*next;
}						t_unit_test;

void					load_test(t_unit_test **tests, char *name, char flag, \
		int (*f)(void));
int					launch_tests(t_unit_test **tests);

#endif
