/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 11:45:14 by dtortera          #+#    #+#             */
/*   Updated: 2013/12/06 13:39:06 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The `ft_strdel()` function frees the memory used by the `as` string, then
** sets the pointer to NULL. This function does nothing if `as` is null.
*/
void	ft_strdel(char **as)
{
	if (*as)
		ft_memdel((void**)as);
}
