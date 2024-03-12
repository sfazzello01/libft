/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:27:54 by sfazzell          #+#    #+#             */
/*   Updated: 2024/03/12 16:15:54 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*r;
	size_t		i;
	size_t		f;

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
