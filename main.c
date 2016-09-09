#include "fdf.h"

int main(int ac, char **av)
{
	t_env	e;

	if (ac == 2)
	{
		init_map(av[1], &e);
		e.proj_type = 0;
		e.mlx = mlx_init();
		e.win = mlx_new_window(e.mlx, W, H, "Fil de Fer");
		init_img(&e);
		mlx_key_hook(e.win, key_hook, &e);
		mlx_expose_hook(e.win, expose_hook, &e);
		mlx_loop(e.mlx);
	}
	write(1, "\n", 1);
	return (0);
}
