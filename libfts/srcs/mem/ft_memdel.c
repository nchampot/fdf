/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 17:45:35 by dtortera          #+#    #+#             */
/*   Updated: 2013/12/06 13:23:03 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** The `ft_memdel()` function frees the memory used by the `ap` pointer, then
** sets the pointer to NULL. This function does nothing if pointer is NULL.
*/
void	ft_memdel(void **ap)
{
	if (*ap)
	{
		free(*ap);
		*ap = NULL;
	}
}
