/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:24:23 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/04 12:24:23 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;
	unsigned char *temp;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	temp = (unsigned char *)malloc(sizeof(unsigned char) * n);
	if (!temp)
		return (NULL);
	ft_memcpy(temp, s, n);
	ft_memcpy(d, temp, n);
	free(temp);
	return (dest);
}