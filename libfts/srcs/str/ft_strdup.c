/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 17:30:52 by dtortera          #+#    #+#             */
/*   Updated: 2013/12/01 20:27:10 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** The `ft_strdup()` function allocates sufficient memory for a copy of the
** string `s1`, does the copy, and returns a pointer to it.
** If insufficient memory is available, the function returns NULL.
*/
char	*ft_strdup(const char *s1)
{
	char	*p;

	p = (char*)malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (p != NULL)
		ft_strcpy(p, s1);
	return (p);
}
