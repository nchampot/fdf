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
	return (grid);
}
