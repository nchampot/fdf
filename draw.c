#include "fdf.h"

void		init_img(t_env *e)
{
	e->img.img = mlx_new_image(e->mlx, W, H);
	e->img.d = mlx_get_data_addr(e->img.img, &(e->img.bpp), &(e->img.szl), &(e->img.endian));
}

void		draw_pixel(t_env *e, int x, int y, int color)
{
	unsigned int	c;

	c = mlx_get_color_value(e->mlx, color);
	e->img.d[y * e->img.szl + x * e->img.bpp / 8] = (c & 0xFF0000) >> 16;
	e->img.d[y * e->img.szl + x * e->img.bpp / 8 + 1] = (c & 0xFF00) >> 8;
	e->img.d[y * e->img.szl + x * e->img.bpp / 8 + 2] = (c & 0xFF);
}

void	draw_map(t_env e)
{
	int	i;
	int	j;

	i = 0;
	while (i < e.map.nbLin)
	{
		j = 0;
		while (j < e.map.lineSize[i])
		{
			draw_seg(
			//printf("%d ", e.map.data[i][j]);
			j++;
		}
		//printf("\n");
		i++;
	}
}
