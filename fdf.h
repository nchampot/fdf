#ifndef FDF_H
# define FDF_H

#include <stdlib.h>
#include <unistd.h>
#include <mlx.h>
#include "libft/inc/libft.h"

#include <stdio.h>//

# define W 1200
# define H 1200
# define TILE_H 64
# define TILE_W 64
/*
**------------KEYS--------------
*/
# define ESC 53
# define UP 126
# define DOWN 125
# define RIGHT 124
# define LEFT 123
# define NUM1 83
# define NUM2 84
# define NUM3 85

# define ISO_X(x, y, z) ((x) - (y)) * TILE_W
# define ISO_Y(x, y, z) ((x) + (y)) * TILE_H

typedef struct	s_xy
{
	int				x;
	int				y;
}				t_xy;

typedef struct	s_img
{
	void			*img;
	int				szl;
	char			*d;
	int				endian;
	int				bpp;
}				t_img;

typedef struct	s_map
{
	int	**data;
	int	*lineSize;
	int	nbLin;
}				t_map;

typedef struct	s_env
{
	void	*mlx;
	void	*win;
	t_img	img;
	t_map	map;
	int		proj_type;
}				t_env;

void	draw_pixel(t_env *e, int x, int y, int color);
void	draw_seg(t_env *e, t_xy a, t_xy b, int color);
void	init_map(char *path, t_env *e);
void	draw_map(t_env *e);
void	init_img(t_env *e);
int		key_hook(int keycode, t_env *e);
int		expose_hook(t_env *e);
t_xy	proj(int x, int y, int z, int keycode);

#endif

