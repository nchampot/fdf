#include "fdf.h"

t_xy	proj(int x, int y, int z, int proj_type)
{
	t_xy	coord;

	if (proj_type == NUM1)	// ISOMETRIC PROJECTION
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
