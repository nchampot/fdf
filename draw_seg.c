#include "fdf.h"

void	horizontal(t_env *e, t_xy a, t_xy b, int color)
{
	int	dx;
	int	dy;
	int	cumul;
	int	xinc;
	int	yinc;

	dx = b.x - a.x;
	dy = b.y - a.y;
	xinc = dx > 0 ? 1 : -1;
	yinc = dy > 0 ? 1 : -1;
	dx = dx < 0 ? -dx : dx;
	dy = dy < 0 ? -dy : dy;
	cumul = dx / 2;
	b.x = 1;
	draw_pixel(e, a.x, a.y, color);
	while (b.x <= dx)
	{
		a.x += xinc;
		cumul += dy;
		if (cumul >= dx)
		{
			cumul -= dx;
			a.y += yinc;
		}
		draw_pixel(e, a.x, a.y, color);
		b.x++;
	}
}

void	vertical(t_env *e, t_xy a, t_xy b, int color)
{
	int	dx;
	int	dy;
	int	cumul;
	int	xinc;
	int	yinc;

	dx = b.x - a.x;
	dy = b.y - a.y;
	xinc = dx > 0 ? 1 : -1;
	yinc = dy > 0 ? 1 : -1;
	dx = dx < 0 ? -dx : dx;
	dy = dy < 0 ? -dy : dy;
	cumul = dy / 2;
	b.x = 1;
	while (b.x <= dy)
	{
		a.y += yinc;
		cumul += dx;
		if (cumul >= dy)
		{
			cumul -= dy;
			a.x += xinc;
		}
		draw_pixel(e, a.x, a.y, color);
		b.x++;
	}
}

void	draw_seg(t_env *e, t_xy a, t_xy b, int color)
{
	int	dx;
	int	dy;

	dx = b.x - a.x;
	dy = b.y - a.y;
	dx = dx < 0 ? -dx : dx;
	dy = dy < 0 ? -dy : dy;
	if (dx > dy)
		horizontal(e, a, b, color);
	else
		vertical(e, a, b, color);
}
