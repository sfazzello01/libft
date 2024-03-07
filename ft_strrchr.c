/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:27:28 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/22 15:50:09 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	l;

	l = ft_strlen(str);
	i = 0;
	while (i <= l)
	{
		if (str[l - i] == c)
			return ((char *)(str + l - i));
		i++;
	}
	return (NULL);
}
