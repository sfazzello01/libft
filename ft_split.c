/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:23:01 by sfazzell          #+#    #+#             */
/*   Updated: 2024/03/07 19:01:44 by sfazzell         ###   ########.fr       */
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
	int	k;
	
    if (s[*i] != c)
	{
        k = 0;
        while (s[*i + k] && s[*i + k] != c)
		{
			printf("k: %d\n", k);
            k++;
		}
        res[*j] = ft_substr(s, *i, k);
        (*j)++;
        *i += k;
    }
	else if (s[*i] == c)
        (*i)++;
}

char **ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	j;
	
	if (s)
	{
		res = (char **)malloc(sizeof(char *) * (ft_count(s, c)) + 1);
		if (res)
		{
			i = 0;
			j = 0;
			while (i < ft_strlen(s))
			{
				//printf("i: %zu\n", i);
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
	char *s = "lorem ipsum dolor sit amet, consectetur adipiscing elit.";
	char c = ' ';
	char **res = ft_split(s, c);
	int i = 0;
	while (res[i])
	{
		printf("%s - %d\n", res[i], i);
		i++;
	}
	printf("%s\n",res[i]);
	return 0;
}