/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 13:45:49 by dtortera          #+#    #+#             */
/*   Updated: 2013/12/01 19:17:06 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/*
** The `ft_strmap()` function applies function `f(char))` to each character of
** the null-terminated string `s`; the function does not modify `s` directly;
** it creates a new string instead, and returns it.
*/
char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	char	*new_str;

	len = ft_strlen(s);
	new_str = ft_strnew(len);
	if (!new_str)
		return (NULL);
	while (len--)
		*(new_str + len) = f(*(s + len));
	return (new_str);
}
