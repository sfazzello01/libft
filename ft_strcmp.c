/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:24:57 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/04 12:24:57 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_strcmp(const char *s1, const char *s2)
{
	int i;
	int l1;
	int l2;

	if (ft_strequ(s1, s2))
		return (0);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	i = 0;
	while (i < l1 && i < l2)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}