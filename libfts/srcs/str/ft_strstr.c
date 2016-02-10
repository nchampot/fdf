/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 17:40:28 by dtortera          #+#    #+#             */
/*   Updated: 2013/12/01 20:00:41 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/*
** The `ft_strstr()` function locates the first occurence of `s2` in `s1`.
** The function returns a pointer to the first found character in `s1` when
** strings `s1` and `s2` are the same.
*/
char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	len;

	if (!*s2)
		return ((char*)s1);
	len = ft_strlen(s2);
	while (*s1)
	{
		if (!ft_memcmp(s1++, s2, len))
			return ((char*)s1 - 1);
	}
	return (0);
}
