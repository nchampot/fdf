/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 17:36:43 by dtortera          #+#    #+#             */
/*   Updated: 2013/11/30 17:47:41 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/*
** The `ft_strneq` function lexicographically compares null-terminated string
** `s1` with null-terminated string `s2`, up to the `n`th character or to the
** first '\0' met. If both strings are equal, 1 is returned; 0 otherwise.
*/
int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
	{
		if (!ft_strncmp(s1, s2, n))
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
