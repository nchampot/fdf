#include <fcntl.h>
#include "fdf.h"

int		is_num(char c)
{
	return (c >= '0' && c <= '9');
}

int		len(char *s)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (s[i])
	{
		if (is_num(s[i]))
		{
			len++;
			while (is_num(s[i]))
				i++;
		}
		else
			i++;
	}
	return (len);
}

int		totalCol(char *path)
{
	int		i;
	int		j;
	int		fd;
	char	*buf;

	i = 0;
	if ((fd = open(path, O_RDONLY)) == -1)
		return (0);
	while (get_next_line(fd, &buf))
	{
		j = 0;
		while (buf[j])
		{
			if (is_num(buf[j]))
				i++;
			j++;
		}
	}
	free(buf);
	close(fd);
	return (i);
}

void	add(char *buf, int ***tab, int pos)
{
	int	j;
	int	x;

	j = 0;
	x = 0;
	while (buf[j])
	{
		if (is_num(buf[j]) || buf[j] == '-')
		{
			(*tab)[pos][x++] = ft_atoi(buf + j);
			while (is_num(buf[j]) || buf[j] == '-')
				j++;
		}
		else
			j++;
	}
}

void	initTable(t_env *e, char *path)
{
	int		i;
	int		fd;
	int 	*tableau2;
	char	*buf;

	i = 0;
	e->map.data = (int**)malloc(sizeof(int*) * e->map.nbLin);
	e->map.lineSize = (int*)malloc(sizeof(int) * e->map.nbLin);
	tableau2 = (int*)malloc(sizeof(int) * totalCol(path));
	fd = open(path, O_RDONLY);
	while (get_next_line(fd, &buf))
	{
		e->map.lineSize[i] = len(buf);
		tableau2 += i > 0 ? e->map.lineSize[i - 1] : 0;
		e->map.data[i] = &(*tableau2);
		add(buf, &(e->map.data), i);
		i++;
	}
	close(fd);
	free(buf);
}

void	init_map(char *path, t_env *e)
{
	int		fd;
	char	*buf;

	e->map.nbLin = 0;
	fd = open(path, O_RDONLY);
	while (get_next_line(fd, &buf))
		e->map.nbLin++;
	close(fd);
	free(buf);
	initTable(e, path);
}
