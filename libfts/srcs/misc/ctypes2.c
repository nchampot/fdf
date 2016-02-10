/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctypes2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/16 17:08:07 by dtortera          #+#    #+#             */
/*   Updated: 2015/02/16 17:09:14 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ctypes.h"

int	ft_isdigit(int c)
{
	return (g_ctype_arr[(c)] & _DT_DIGIT);
}

int	ft_isgraph(int c)
{
	return (g_ctype_arr[(c)] & _DT_GRAPH);
}

int	ft_islower(int c)
{
	return (g_ctype_arr[(c)] & _DT_LOWER);
}

int	ft_isprint(int c)
{
	return (g_ctype_arr[(c)] & _DT_PRINT);
}

int	ft_ispunct(int c)
{
	return (g_ctype_arr[(c)] & _DT_PUNCT);
}
