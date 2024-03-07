/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:23:01 by sfazzell          #+#    #+#             */
/*   Updated: 2024/03/07 17:25:51 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t ft_count(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] == c)
			{
					i++;
					if (!s[i])
					{
						printf("count: %zu\n", count);
						return (count);
					}
			}
			count++;
		}
		i++;
	}
	return (count);
}

static void ft_aux(char *s, char c, char **res, size_t *i, size_t *j) {
    if (s[*i] != c) {
        int k = 0;
        while (s[*i + k] && s[*i + k] != c)
            k++;
        res[*j] = ft_substr(s, *i, k);
        (*j)++;
        *i += k;
    } else {
        (*i)++;
    }
}

char **ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	j;
	size_t	k;
	
	if (s)
	{
		res = (char **)malloc(sizeof(char *) * (ft_count(s, c)) + 1);
		if (res)
		{
			i = 0;
			j = 0;
			while (s[i])
			{
				ft_aux((char *)s, c, res, &i, &j);
			}
			res[j] = NULL;
			return (res);
		}
	}
	return (NULL);
}

int main()
{
	char *s = " ciao    come va ";
	char c = ' ';
	char **res = ft_split(s, c);
	int i = 0;
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	return 0;
}