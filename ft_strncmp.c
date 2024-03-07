/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:26:49 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/23 17:21:25 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
	{
		while (*s1 && *s2 && n)
		{
			if (*s1 != *s2)
				return (0);
			s1++;
			s2++;
			n--;
		}
		if (*s1 != *s2)
			return (0);
		return (1);
	}
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	l1;
	size_t	l2;

	if (!n)
		return (0);
	if ((ft_strlen(s1) == 0 && ft_strlen(s2) != 0)
		|| (ft_strlen(s1) != 0 && ft_strlen(s2) == 0))
		return ((unsigned char)s1[0] - (unsigned char)s2[0]);
	if (ft_strnequ(s1, s2, n))
		return (0);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	i = 0;
	while (i < l1 && i < l2 && i < n)
	{
		if (s1[i] != s2[i])
		{
			//printf("s1[i]: %c\n", s1[i]);
			//printf("s2[i]: %c\n", s2[i]);
			return ((unsigned int)s1[i] - (unsigned int)s2[i]);
		}
		i++;
	}
	if ((i == l1 || i == l2) && i < n)
		return ((int)(s1[i] - s2[i]));
	return (0);
}
/*
int main (void)
{
	char *s1 = "zebra";
	char *s2 = "ciaone";
	size_t n = 3;
	printf("strncmp: %d\n", ft_strncmp(s1, s2, n));
	return (0);
}*/