/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   projection.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchampot <nchampot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/12 16:31:10 by nchampot          #+#    #+#             */
/*   Updated: 2015/10/21 02:46:22 by nchampot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		**normalize(int keycode, t_map *m)
{
	int		**grid;



	while (i < m->nbline)
	{
		j = 0;
		while (j < m->lineSize[i])
		{
			if (keycode == p1)
				grid[i][j] = (int)NORMISO(i, j, m->data[i][j]);
			j++;
		}
		i++;
	}

}
