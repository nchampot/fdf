/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:03:57 by dtortera          #+#    #+#             */
/*   Updated: 2013/12/01 19:39:10 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The `ft_tolower()` function converts the uppercase letter `c` to lowercase.
*/
int		ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + ('a' - 'A'));
	return (c);
}
