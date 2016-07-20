/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 18:23:45 by dtortera          #+#    #+#             */
/*   Updated: 2013/12/01 19:25:38 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** The `ft_strncat()` function appends `n` characters from `s2` to `s1`.
** `s1` must have sufficient space to hold both strings. The `s1` and `s2`
** strings should not overlap, as behavior is undefined.
** If the copy stops normally (`!*s2`), `s1` will be naturally null-terminated;
** otherwise (if copy stops because of the `n` argument), a '\0' is appened.
*/
char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*s1_begin;

	s1_begin = s1;
	while (*s1)
		s1++;
	while (n--)
	{
		if (!(*s1++ = *s2++))
			return (s1_begin);
	}
	*s1 = '\0';
	return (s1_begin);
}
