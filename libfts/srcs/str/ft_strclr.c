/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 11:56:22 by dtortera          #+#    #+#             */
/*   Updated: 2013/12/01 19:01:36 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The `ft_strclr()` function assigns '\0' to every character of the `s` string.
*/
void	ft_strclr(char *s)
{
	while (*s)
		*s++ = '\0';
}
