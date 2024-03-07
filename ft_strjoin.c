/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:25:49 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/22 17:23:11 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;
	int	l;

	i = 0;
	l = ft_strlen(src);
	while (i < l)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	l;

	l = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;

	if (s1 && s2)
	{
		r = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (r)
		{
			ft_strcpy(r, s1);
			ft_strcat(r, s2);
			return (r);
		}
	}
	return (NULL);
}
