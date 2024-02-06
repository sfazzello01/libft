/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:27:02 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/04 12:27:02 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
	{
		while (*s1 && *s2 && n)
		{
			if (*s1 != *s2)
				return (0);
			s1++;
			s2++;
			n--;
		}
		if (*s1 != *s2)
			return (0);
		return (1);
	}
	return (0);
}