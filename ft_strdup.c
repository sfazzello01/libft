/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:25:17 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/22 18:38:54 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cp;
	int		i;
	int		l;

	i = 0;
	l = ft_strlen(s1);
	cp = (char *)malloc(l + 1);
	if (cp)
	{
		while (i < l)
		{
			cp[i] = s1[i];
			i++;
		}
		cp[i] = '\0';
		return (cp);
	}
	return (NULL);
}
