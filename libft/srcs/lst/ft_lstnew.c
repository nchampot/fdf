/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/06 19:20:52 by dtortera          #+#    #+#             */
/*   Updated: 2014/01/06 19:40:23 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_elem;

	new_elem = (t_list*)malloc(sizeof(t_list));
	if (new_elem)
	{
		if (!content)
		{
			new_elem->content = NULL;
			new_elem->content_size = 0;
			free(new_elem);
		}
		else
		{
			if (!(new_elem->content = (void*)malloc(content_size)))
				return (NULL);
			ft_memcpy(new_elem->content, content, content_size);
		}
		new_elem->next = NULL;
	}
	return (new_elem);
}
