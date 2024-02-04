/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:23:01 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/04 12:23:01 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		n;
	int		f;
	char	**res;

	if (!s)
		return (NULL);
	i = -1;
	n = 0;
	while (s[++i])
		if (s[i] == c)
			n++;
	res = ft_memalloc(sizeof(char *) * (n + 2));
	if (!res)
		return (NULL);
	i = -1;
	n = -1;
	while (s[++i])
	{
		f = 0;
		while (s[i + f] != c && s[i + f] != '\0')
			f++;
		res[++n] = ft_strsub(s, i, f);
		if (!res[n])
		{
			while (n >= 0)
				free(res[n--]);
			free(res);
			return (NULL);
		}
		i += f;
		if (s[i] != '\0')
			i++;
	}
	res[++n] = NULL;
	return (res);
}