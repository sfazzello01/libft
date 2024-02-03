/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:21:09 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/03 11:21:09 by sfazzell         ###   ########.fr       */
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