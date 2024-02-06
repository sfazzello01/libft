/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:27:28 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/04 12:27:28 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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