/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 17:43:38 by dtortera          #+#    #+#             */
/*   Updated: 2013/12/01 20:03:38 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** The `ft_strncmp()` function lexicographically compares strings `s1` and `s2`,
** comparing no more than `n` characters. Characters that appear after a '\0'
** are not compared. The function returns 0 if the strings are identical;
** otherwise, it returns the difference in ASCII value between the first diff-
** ering characters.
*/
int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	while (n--)
	{
		if (*s1 != *s2)
			return (*(unsigned char*)(s1) - *(unsigned char*)(s2));
		if (!*s1 || !*s2)
			break ;
		s1++;
		s2++;
	}
	return (0);
}
