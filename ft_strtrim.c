/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:27:54 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/04 12:27:54 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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