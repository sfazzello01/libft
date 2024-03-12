/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:23:10 by sfazzell          #+#    #+#             */
/*   Updated: 2024/03/12 15:31:29 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strrev(char *str)
{
	size_t	i;
	size_t	j;
	char	tmp;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}

static size_t	ft_digitcount(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i + 2);
}

static void	aux_itoa(int n, char *str, int i)
{
	if (n < 10)
		str[i] = n + '0';
	else
	{
		str[i] = n % 10 + '0';
		aux_itoa(n / 10, str, i + 1);
	}
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;
	char	*sgn;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_digitcount(n);
	str = calloc(len, 1);
	if (str)
	{
		if (n < 0)
		{
			sgn = calloc(2, 1);
			*sgn = '-';
			aux_itoa(-n, str, 0);
			return (ft_strjoin(sgn, ft_strrev(str)));
		}
		aux_itoa(n, str, 0);
		return (ft_strrev(str));
	}
	return (NULL);
}
