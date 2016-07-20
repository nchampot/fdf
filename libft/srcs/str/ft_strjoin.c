/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 20:33:17 by dtortera          #+#    #+#             */
/*   Updated: 2013/12/01 19:14:21 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/*
** The `ft_strjoin()` function contatenates null-terminated strings `s1` and
** `s2` into a bigger string. The function returns NULL if allocation fails.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	char	*new_str;

	len_s1 = ft_strlen(s1);
	new_str = ft_strnew(len_s1 + ft_strlen(s2));
	if (!new_str)
		return (NULL);
	ft_strcat(new_str, s1);
	ft_strcat(new_str + len_s1, s2);
	return (new_str);
}
