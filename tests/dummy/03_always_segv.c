/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_always_segv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 23:01:02 by apachkof          #+#    #+#             */
/*   Updated: 2017/11/25 11:08:05 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	always_segv(void)
{
	int *seg;

	seg = ((int *)-1);
	if (*seg == 42)
		return (0);
	else
		return (-1);
}
