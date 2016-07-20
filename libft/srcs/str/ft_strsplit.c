/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 11:51:49 by dtortera          #+#    #+#             */
/*   Updated: 2015/02/16 16:04:37 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

/*
** The `ft_strsplit()` function splits the null-terminated string `s` by the
** delimiter `c`, stores each chunk (smaller string) into a new array.
** The big array is NULL-terminated, so are the strings within it ('\0').
** The function returns NULL if any allocation failed.
** FIXME: Mouli-nator's double free.
** XXX: Thanks fbuoro for the help.
*/

/*
** This function counts the number of occurences ("words") in string `s`; words
** being separated with `c`s. If no token is found, that makes one word; if no
** word is found... that makes zero word.
*/
static size_t	count_tok(char const *s, char c)
{
	size_t	nb_occ;
	char	*token_next;

	nb_occ = 0;
	if (!(token_next = ft_strchr(s, c)))
		return (1);
	while (*s && token_next)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			token_next = ft_strchr(s, c);
			s += (token_next) ? token_next - s : 0;
			nb_occ++;
		}
	}
	return (nb_occ);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**big_array;
	size_t		i;
	size_t		nb_tok;
	char const	*token;
	char const	*tok_next;

	big_array = NULL;
	if ((token = s))
	{
		nb_tok = count_tok(s, c);
		if ((big_array = (char**)malloc((nb_tok + 1) * sizeof(char*))))
		{
			i = 0;
			big_array[nb_tok] = NULL;
			while ((tok_next = ft_strchr(token, c)))
			{
				if (tok_next - token > 0)
					big_array[i++] = ft_strsub(s, token - s, tok_next - token);
				token = tok_next + 1;
			}
			if ((tok_next = ft_strchr(token, '\0')) - token > 0)
				big_array[i++] = ft_strsub(s, token - s, tok_next - token);
		}
	}
	return (big_array);
}
