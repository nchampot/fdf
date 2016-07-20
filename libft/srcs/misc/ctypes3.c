/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctypes3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/16 17:08:42 by dtortera          #+#    #+#             */
/*   Updated: 2015/02/16 17:09:20 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ctypes.h"

int	ft_isspace(int c)
{
	return (g_ctype_arr[(c)] & _DT_SPACE);
}

int	ft_isupper(int c)
{
	return (g_ctype_arr[(c)] & _DT_UPPER);
}

int	ft_isxdigit(int c)
{
	return (g_ctype_arr[(c)] & _DT_XDIGIT);
}

int	ft_toascii(int c)
{
	return ((c) & 0x7F);
}
