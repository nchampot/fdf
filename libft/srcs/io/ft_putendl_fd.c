/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:11:04 by dtortera          #+#    #+#             */
/*   Updated: 2015/02/16 16:48:31 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int		ft_putendl_fd(char const *s, int fd)
{
	int		count;

	count = 0;
	count += ft_putstr_fd(s, fd);
	count += ft_putchar_fd('\n', fd);
	return (count);
}

int		ft_putendl(char const *s)
{
	return (ft_putendl_fd(s, STDOUT_FILENO));
}
