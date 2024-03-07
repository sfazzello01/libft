/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:27:54 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/23 17:03:28 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*r;
	size_t 		i;
	size_t 		f;

	if (s1)
	{
		if (!set)
			return (ft_strdup(s1));
		i = 0;
		f = ft_strlen(s1) - 1;
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[f] && ft_strchr(set, s1[f]))
			f--;
		r = ft_substr(s1, i, f - i + 1);
		if (r)
		{
			return (r);
		}
		return (NULL);
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*str = "ciao";
	char	*set = " ";
	char	*trimmed = ft_strtrim(str, set);
	printf("trimmed: %s\n", trimmed);
	return (0);
}*/