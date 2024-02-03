/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:21:12 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/03 11:21:12 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strrchr(const char *str, int c)
{
	int i;
	int l;

	l = ft_strlen(str);
	i = 0;

	while (i <= l)
	{
		if (str[l - i] == c)
			return (str + l - i);
		i++;
	}
	return (NULL);
}