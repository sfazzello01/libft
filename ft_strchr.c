/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:24:41 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/04 12:24:41 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;
	int l;

	l = ft_strlen(*s);
	i = 0;
	while(i <= l)
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}