/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 18:27:00 by dtortera          #+#    #+#             */
/*   Updated: 2013/11/26 17:33:42 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/*
** The `ft_strlcat()` function concatenates the null-terminated string `src`
** into the null-terminated string `dst`. The `size` parameter represents a
** buffer size (= big), not a combined strings' size like that of `ft_strncat`.
** If copy cannot occur because buffer's `size` is too small, returns
** `size + ft_strlen(src)`; otherwise, perform the copy and returns final size.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	size_orig;

	size_orig = size;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	while (*dst && size)
	{
		dst++;
		size--;
	}
	if (!size)
		return (size_orig + len_src);
	while (*src && size-- > 1)
		*dst++ = *src++;
	*dst = '\0';
	return (len_dst + len_src);
}
