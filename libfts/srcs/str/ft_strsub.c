/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 17:50:18 by dtortera          #+#    #+#             */
/*   Updated: 2014/01/08 16:40:06 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/*
** The `ft_strsub()` function takes a part of the string `s` (starting at index
** `start`, for `len` characters), creates a new string out of this substracted
** part, and returns a pointer to it. The function returns NULL if the memory
** allocation failed. If `start` and/or `len` do not designate correct portions
** of `s`, behavior is undefined (we return NULL here).
** If `start` is outside `s`'s boundaries, do nothing (return NULL).
*/
char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	len_str;
	char	*new_str;

	len_str = ft_strlen(s);
	if (start > len_str || len > len_str)
		return (NULL);
	if (start + len > len_str)
		return (NULL);
	if (!(new_str = ft_strnew(len)))
		return (NULL);
	new_str = ft_strncpy(new_str, s + start, len);
	new_str[len] = '\0';
	return (new_str);
}
