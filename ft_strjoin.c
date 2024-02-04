/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:25:49 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/04 12:25:49 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char *r;

	if (s1 && s2)
	{
		r = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (r)
		{
			ft_strcpy(r, s1);
			ft_strcat(r, s2);
			return (r);
		}
	}