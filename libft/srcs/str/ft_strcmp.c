/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 17:42:28 by dtortera          #+#    #+#             */
/*   Updated: 2013/12/01 19:03:10 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The `ft_strcmp()` function lexicographically compare strings `s1` and `s2`.
** The function returns 0 if the strings are identical; otherwise, it returns
** the difference in ASCII value between the first differing characters.
*/
int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char *)s2);
}
