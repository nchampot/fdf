#include "fdf.h"


t_xy	proj(int x, int y, int z, int keycode)
{
	t_xy	coord;

	if (keycode == NUM1)	// ISOMETRIC PROJECTION
	{
		coord.x = ISO_X(x, y, z);
		coord.y = ISO_Y(x, y, z);
	}
	else			// FLAT PROJECTION
	{
		coord.x = x;
		coord.y = y;
	}
	return (coord);
}
