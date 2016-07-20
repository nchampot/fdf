/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 16:29:13 by dtortera          #+#    #+#             */
/*   Updated: 2015/02/16 16:48:12 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** The `ft_putchar_fd()` function writes the character `c` (converted to an
** unsigned char) to the file descriptor `fd`.
*/
int		ft_putchar_fd(char c, int fd)
{
	unsigned char	chr;

	chr = (unsigned char)c;
	return (write(fd, &chr, 1));
}

int		ft_putchar(char c)
{
	return (ft_putchar_fd(c, STDOUT_FILENO));
}
