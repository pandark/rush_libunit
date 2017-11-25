/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 22:46:52 by apachkof          #+#    #+#             */
/*   Updated: 2017/11/25 06:29:09 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Le main de test doit être placé à la racine de cette arborescence, et doit
** appeller tous les Launchers. Vous devez concevoir le main de test de telle
** sorte que vous pouvez sauter un ou plusieurs Launchers spécifiques (voir
** règle plus haut).
*/

#include "dummy.h"
#include "libunit.h"

int		main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int	ret;

	ret = dummy_launcher();
}