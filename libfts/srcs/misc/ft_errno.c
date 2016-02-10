/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errno.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/30 16:57:09 by dtortera          #+#    #+#             */
/*   Updated: 2015/02/16 14:59:01 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <stddef.h>
#include <unistd.h>
#include "libft.h"

char	*ft_strerror(int errnum)
{
	char						*err_msg;
	extern const char *const	sys_errlist[];
	extern const int			sys_nerr;

	if (errnum < 0 || errnum >= sys_nerr)
	{
		errno = EINVAL;
		return (ft_strjoin("Unknown error: ", ft_itoa(errnum)));
	}
	err_msg = (char*)sys_errlist[errnum];
	return (err_msg);
}

void	ft_perror(const char *s)
{
	char	*err_msg;

	if (s && *s != '\0')
	{
		write(2, s, ft_strlen(s));
		write(2, ": ", 2);
	}
	err_msg = ft_strerror(errno);
	write(2, err_msg, ft_strlen(err_msg));
	write(2, "\n", 1);
}
