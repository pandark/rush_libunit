/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 20:57:40 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/24 22:50:35 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H

# define LIBUNIT_H

# include "../libft_ntoniolo/includes/libft.h"
# include <sys/wait.h>
# include <signal.h>

typedef struct			s_ut
{
	char				*name;
	char				flag;
	int					(*f)(void *);

	struct s_ut			*next;
}						t_ut;


void					destruct_test(t_ut **test);
void					destruct_all_tests(t_ut **list_tests);
void					construct_test(t_ut **list_tests, int (*f)(void *), char *name);
//load test

//launchtests

#endif
