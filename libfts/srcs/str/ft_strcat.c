/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 17:37:27 by dtortera          #+#    #+#             */
/*   Updated: 2013/12/01 19:57:49 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** The `ft_strcat()` function appends the string `s2` to the string `s1`.
** `s1` must have sufficient space to hold both strings.
*/
char	*ft_strcat(char *s1, const char *s2)
{
	char	*s1_begin;

	s1_begin = s1;
	while (*s1)
		s1++;
	while ((*s1++ = *s2++))
		;
	return (s1_begin);
}
