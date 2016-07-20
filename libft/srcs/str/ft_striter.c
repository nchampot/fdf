/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 12:01:32 by dtortera          #+#    #+#             */
/*   Updated: 2013/11/30 13:05:07 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The `ft_striter()` function applies function `f` (pointer) to each character
** of the null-terminated string `s`.
*/
void	ft_striter(char *s, void (*f)(char*))
{
	while (*s)
		f(s++);
}
