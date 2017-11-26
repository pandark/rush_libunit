/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cobaye.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 12:15:38 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/11/26 17:22:56 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COBAYE_H
# define COBAYE_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

char			*co_itoa(long long int n);
void			co_putnbr(long int nb);
size_t			co_strlen(const char *s);
size_t			co_strlcat(char *dest, const char *src, size_t size);

#endif
