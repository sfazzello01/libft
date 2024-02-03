/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:57:17 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/03 19:57:17 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *new;
	size_t i;

	i = 0;
	if (s && f)
	{
		new = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (new)
		{
			while (s[i])
			{
				new[i] = f(i, s[i]);
				i++;
			}
			new[i] = '\0';
			return (new);
		}
	}
	return (NULL);
}