/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 20:57:40 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/24 21:45:43 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H

# define LIBUNIT_H

# include "../libft_ntoniolo/includes/libft.h"
# include <sys/wait.h>
# include <signal.h>

typedef struct	s_ut
{
	char				*name;
	char				flag;
	int					(*f)(void *);

	struct s_ut			*next;
}				t_ut;

//load test

//launchtests

#endif
