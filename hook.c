#include "fdf.h"

int		expose_hook(t_env *e)
{
	draw_map(e);
	mlx_put_image_to_window(e->mlx, e->win, e->img.img, 0, 0);
	return (0);
}

void	repaint(t_env *e)
{
	mlx_destroy_image(e->win, &(e->img.img));
	init_img(e);
	expose_hook(e);
}

int		key_hook(int keycode, t_env *e)
{
	if (keycode == ESC)
		exit(0);
	if (keycode == NUM1)
	{
		e->proj_type = NUM1;
		repaint(e);
	}
	return (0);
}
