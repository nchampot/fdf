/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 17:07:46 by dtortera          #+#    #+#             */
/*   Updated: 2015/02/16 15:00:14 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/*
** The `ft_itoa()` converts the integer `n` to a string representation of it.
** The function returns a pointer to the fresh string, or NULL if the memory
** allocation failed.
*/
static size_t	count_digits(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	size_t			len;
	char			*str;
	unsigned int	u_nbr;

	len = count_digits(n);
	u_nbr = n;
	if (n < 0)
	{
		u_nbr = -n;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = u_nbr % 10 + '0';
	while (u_nbr /= 10)
		str[--len] = u_nbr % 10 + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
