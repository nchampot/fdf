#include "fdf.h"

int		expose_hook(t_env *e)
{
	draw_map(0, e->map);
	mlx_put_image_to_window(e->mlx, e->win, e->img.img, 0, 0);
	return (0);
}

int		key_hook(int keycode, t_env *e)
{
	(void)e;
	if (keycode == ESC)
		exit(0);
	if (keycode == NUM1 || keycode == NUM2)
	{
		clear_img(e->img);
		draw_map(keycode, e);
	}
	return (0);
}
