/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 20:19:22 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/03 20:19:22 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *sub;
	size_t i;

	if (s)
	{
		sub = (char *)malloc(sizeof(char) * (len + 1));
		if (sub)
		{
			i = 0;
			while (i < len)
			{
				sub[i] = s[start + i];
				i++;
			}
			sub[i] = '\0';
			return (sub);
		}
	}
	return (NULL);
}