/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:23:23 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/04 12:23:23 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_bzero(void *dest, size_t num)
{
	unsigned char *p = dest;
	while (num-- > 0)
	{
		*p++ = (unsigned char)0;
	}
}