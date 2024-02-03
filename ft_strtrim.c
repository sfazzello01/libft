/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 20:26:50 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/03 20:26:50 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strtrim(char const *s)
{
	char *r;
	int i;
	int f;

	if (s)
	{
		i = 0;
		f = ft_strlen(s);
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		while (s[f] == ' ' || s[f] == '\n' || s[f] == '\t')
			f--;
		r = ft_strnew(f - i);
		ft_strncpy(r, s + i, f - i);
		return (r);
	}
}