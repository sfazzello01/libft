/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <sfazzell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:28:01 by sfazzell          #+#    #+#             */
/*   Updated: 2024/02/04 12:28:01 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int i){
	if ('a' <= i && i <= 'z')
		return (i - 32);
	return (i);
}