/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_always_buse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 23:02:28 by apachkof          #+#    #+#             */
/*   Updated: 2017/11/25 11:13:17 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int n;

	n = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[n])
	{
		dest[i + n] = src[n];
		n++;
	}
	dest[i + n] = '\0';
	return (dest);
}

int			always_buse(void)
{
	const char *s = "this is ";
	const char *s1 = "me";

	ft_strcat(s, s1);
	if (*s == *"this is me")
		return (0);
	else
		return (-1);
}
