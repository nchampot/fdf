/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 18:21:52 by dtortera          #+#    #+#             */
/*   Updated: 2015/02/16 16:44:05 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/*
** The `ft_putnbr_fd()` function writes the integer `n` to file descriptor `fd`.
*/
int			ft_putnbr_fd(int n, int fd)
{
	unsigned int	count;
	unsigned int	u_nbr;

	count = 0;
	u_nbr = n;
	if (n < 0)
	{
		count += ft_putchar_fd('-', fd);
		u_nbr = -n;
	}
	if (u_nbr / 10)
		count += ft_putnbr_fd(u_nbr / 10, fd);
	count += ft_putchar_fd(u_nbr % 10 + '0', fd);
	return (count);
}

int			ft_putnbr(int n)
{
	return (ft_putnbr_fd(n, STDOUT_FILENO));
}
