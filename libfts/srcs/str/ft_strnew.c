/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 17:52:12 by dtortera          #+#    #+#             */
/*   Updated: 2013/12/01 19:28:46 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/*
** The `ft_strnew()` function creates a new string of `size` characters, fills
** it with '\0's, and returns a pointer to the freshly-allocated memory.
*/
char	*ft_strnew(size_t size)
{
	return ((char*)ft_memalloc(size + 1));
}
