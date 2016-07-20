/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:31:12 by dtortera          #+#    #+#             */
/*   Updated: 2013/11/26 16:24:44 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/*
** The `ft_bzero()` function writes `n` zeroed bytes to string `so.
** If `n` is zero, `ft_bzero()` does nothing.
*/
void	ft_bzero(void *s, size_t n)
{
	if (n)
		ft_memset((unsigned char*)s, 0, n);
}
