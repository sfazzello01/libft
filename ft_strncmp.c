/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:21:30 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/03 11:21:30 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	int l1;
	int l2;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	i = 0;
	while (i < l1 && i < l2 && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((i == l1 || i == l2) && i < n)
		return (s1[i] - s2[i]);
	return (0);
}