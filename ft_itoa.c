/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:23:10 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/04 12:23:10 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	char	*rev;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		res = ft_itoa(-n);
		rev = ft_strjoin("-", res);
		free(res);
		return (rev);
	}
	i = 0;
	res = ft_strnew(11);
	while (n >= 10)
	{
		res[i++] = n % 10 + '0';
		n = n/10;
	}
	res[i] = n + '0';
	rev = ft_strrev(res);
	free(res);
	return (rev);
}