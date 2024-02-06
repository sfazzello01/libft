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

#include "libft.h"

static char **ft_process_string(char *s, char c, char **res)
{
	int i;
	int n;
	int f;

	n = -1;
	i = -1;
	while (*s)
	{
		f = 0;
		while (s[f] != c && s[f] != '\0')
			f++;
		res[++n] = ft_strsub(s, i, f);
		ft_free_res(res, n);
		i += f;
		if (ft_strchr(s, c))
			s = ft_strchr(s, c) + 1;
	}
	res[++n] = NULL; 
	return res;
}

static void ft_free_res(char **res, int n)
{
	if (!res[n])
	{
		while (n >= 0)
			free(res[n--]);
		free(res);
	}
}

char **ft_strsplit(char const *s, char c)
{
	int i;
	int n;
	int f;
	char **res;
		
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
	res = ft_process_string(s, c, res);
	
	return (res);
}