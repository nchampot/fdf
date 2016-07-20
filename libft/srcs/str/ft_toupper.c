/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:56:14 by dtortera          #+#    #+#             */
/*   Updated: 2013/12/01 19:39:42 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The `ft_toupper()` function converts the lowercase letter `c` to uppercase.
*/
int		ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - ('a' - 'A'));
	return (c);
}
