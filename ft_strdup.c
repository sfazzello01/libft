/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:21:07 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/03 11:21:07 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strdup(const char *s1)
{
	char	*cp;
	int		i;
	int		l;

	i = 0;
	l = ft_strlen(s1);
	cp = (char *)malloc(l + 1);
	while (i < l)
	{
		cp[i]= s1[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}