/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:14:09 by dtortera          #+#    #+#             */
/*   Updated: 2014/03/03 14:09:17 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The `ft_atoi()` function converts the initial portion of the string `str`
** to `int` representation.
** The string may begin with an arbitrary amount of white space, followed by
** a single, optional, '+' or '-' sign.
*/
int		ft_atoi(const char *str)
{
	int		number;
	char	scalar;

	number = 0;
	scalar = 1;
	while (*str != '\0' && ft_isspace((unsigned char)*str))
		str++;
	if (*str != '\0' && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			scalar = -1;
		str++;
	}
	while (*str != '\0' && ft_isdigit((unsigned char)*str))
	{
		number *= 10;
		number += *str - '0';
		str++;
	}
	return (scalar * number);
}
