/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 15:48:31 by dtortera          #+#    #+#             */
/*   Updated: 2013/12/01 19:17:15 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*new_str;

	len = ft_strlen(s);
	new_str = ft_strnew(len);
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(new_str + i) = f(i, *(s + i));
		i++;
	}
	return (new_str);
}
