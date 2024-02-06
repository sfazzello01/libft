/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:27:36 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/04 12:27:36 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int l;

	l = ft_strlen(haystack);
	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (i < l)
	{
		j = 0;
		if (haystack[i] == needle[j])
			while (haystack[i + j] == needle[j])
			{
				if (j == ft_strlen(needle) - 1)
					return ((char *)haystack + i);
				j++;
			}
	}
	return (NULL);
}