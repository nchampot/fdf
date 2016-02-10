/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/26 13:46:56 by dtortera          #+#    #+#             */
/*   Updated: 2015/02/16 14:57:18 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

/*
** The `get_next_line()` function reads a line of arbitrary length from
** file descriptor `fd`, and stores the line it read into char pointer `line`.
** XXX: Greatly based on Fabrice Buoro (fbuoro)'s idea and algorithm.
** XXX: This function shall be re-writen in the future (in due time).
*/

/*
** The get_line function shall get the first line (terminated by '\n') it finds
** in `buf`, and copy it in the `*line` character pointer.
** The function returns 1 is a '\n' was found or 0 if not, or -1 if an error
** occurred (such as a `malloc(3)` error).
*/

/*
** This function shall "rotate" `buf` (of size `buf_size`), `n` bytes to the
** left, so that its payload (useful content, buf_size - n) always starts
** at `buf[0]`.
*/
static void	rotate_buf(char *buf, size_t buf_size, unsigned int n)
{
	size_t	i;

	i = 0;
	while (i < buf_size)
	{
		if (i + n < buf_size)
			buf[i] = buf[i + n];
		else
			buf[i] = '\0';
		i++;
	}
	return ;
}

static int	get_line(char *buf, char **line)
{
	char	eol_char;
	int		found_eol;
	size_t	len_buf;
	size_t	len_offset;
	char	*new_str;

	found_eol = ft_memchr(buf, '\n', BUFF_SIZE) ? 1 : 0;
	eol_char = found_eol ? '\n' : '\0';
	len_buf = (char*)ft_memchr(buf, eol_char, BUFF_SIZE + 1) - buf + 1;
	len_offset = *line ? ft_strlen(*line) : 0;
	if (!(new_str = ft_strnew(len_offset + len_buf)))
		return (-1);
	if (*line)
	{
		ft_strcpy(new_str, *line);
		free(*line);
	}
	ft_memcpy(new_str + len_offset, buf, len_buf - 1);
	*line = new_str;
	rotate_buf(buf, BUFF_SIZE, len_buf);
	return (found_eol);
}

int			get_next_line(int const fd, char **line)
{
	static char		buf[BUFF_SIZE + 1];
	int				bytes_read;
	size_t			offset;
	int				ret;

	if (BUFF_SIZE > 0 && line)
	{
		*line = NULL;
		if ((ret = get_line(buf, line)) != 0)
			return (ret);
		offset = ft_strlen(buf);
		while ((bytes_read = read(fd, buf + offset, BUFF_SIZE - offset)) > 0)
		{
			if ((ret = get_line(buf, line)) != 0)
				return (ret);
		}
		if (!bytes_read && **line)
			return (1);
		ft_memset(buf, 0, BUFF_SIZE);
		return (0);
	}
	return (-1);
}
