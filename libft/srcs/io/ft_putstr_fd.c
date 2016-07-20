/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:19:26 by dtortera          #+#    #+#             */
/*   Updated: 2015/02/16 16:43:47 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>
#include "libft.h"

/*
** The `ft_putstr()` function writes the null-terminated string `s` to the
** file descriptor `fd`.
*/
int		ft_putstr_fd(char const *s, int fd)
{
	size_t	len_s;

	len_s = ft_strlen(s);
	return (write(fd, s, len_s));
}

int		ft_putstr(char const *s)
{
	return (ft_putstr_fd(s, STDOUT_FILENO));
}
