/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 17:38:36 by dtortera          #+#    #+#             */
/*   Updated: 2013/12/02 18:56:27 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The `ft_strchr()` function locates the 1st occurence of `c` (converted to a
** char) in `s`; if `c` is '\0', the function will locate this terminating '\0'.
** The function returns a pointer to the located character, or NULL otherwise).
*/
char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s++)
			return (0);
	}
	return ((char*)s);
}
