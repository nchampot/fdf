/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_ctypes.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 15:48:59 by dtortera          #+#    #+#             */
/*   Updated: 2015/02/16 15:48:28 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CTYPES_H
# define LIBFT_CTYPES_H

# define __C(decimal_value, char_desc, types)	types

# define DT_CTYPE_ARR_SIZE	128

# define _DT_ALPHA	0x001
# define _DT_CNTRL	0x002
# define _DT_DIGIT	0x004
# define _DT_GRAPH	0x008
# define _DT_LOWER	0x010
# define _DT_PUNCT	0x020
# define _DT_SPACE	0x040
# define _DT_UPPER	0x080
# define _DT_XDIGIT	0x100
# define _DT_BLANK	0x200
# define _DT_PRINT	0x400

extern const int	g_ctype_arr[DT_CTYPE_ARR_SIZE];

#endif
