/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 18:09:15 by dtortera          #+#    #+#             */
/*   Updated: 2014/01/08 15:46:10 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next_elem;

	while (*alst)
	{
		next_elem = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = next_elem;
	}
	*alst = NULL;
}
