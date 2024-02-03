/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 20:36:22 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/03 20:36:22 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char **ft_strsplit(char const *s, char c)
{
	int i;
	int n;
	int f;
	char **res;

	if (s)
	{
		i = 0;
		n = 0;
		while (s[i])
		{
			if (s[i] == c)
				n++;
			i++;
		}
		res = ft_memalloc(sizeof(char *)*(n + 2));
			return NULL;
		i = 0;
		n = 0;
		while (s[i])
		{
			f = 0;
			while (s[i + f] != c && s[i + f] != '\0')
				f++;
			res[n] = ft_strsub(s, i, f);
			if (!res[n])
			{
				while (n > 0)
					free(res[--n]);
				free(res);
				return NULL;
			}
			n++;
			i += f;
			if (s[i] != '\0')
				i++;
		}
		res[n] = NULL;
	}
	return res;
}