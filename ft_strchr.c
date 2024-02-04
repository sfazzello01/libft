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

#include <string.h>

char *strchr(const char *str, int c)
{
	int i;
	int l;

	l = ft_strlen(str);
	i = 0;
	while(i <= l)
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	return (NULL);
}