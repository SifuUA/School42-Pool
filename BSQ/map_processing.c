/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_processing.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oslutsky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 20:06:58 by oslutsky          #+#    #+#             */
/*   Updated: 2016/11/16 20:39:11 by oslutsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"

void	print_line_by_putchars(t_map *map, int i, int j)
{
	while (map->map[i][j] != '\0')
	{
		if (j >= map->x_sqr && j < map->x_sqr + map->size_sqr
				&& i >= map->y_sqr && i < map->y_sqr + map->size_sqr
				&& map->map[i][j] == map->c_empty)
			ft_putchar(map->c_full);
		else
			ft_putchar(map->map[i][j]);
		j++;
	}
}

void	print_map(t_map map)
{
	int		i;
	int		x_max;

	if (map.is_correct == 0)
	{
		write(2, "map error\n", 10);
		return ;
	}
	x_max = ft_strlen(map.map[0]);
	i = 0;
	while (i < map.argc)
	{
		if (i < map.y_sqr || i > map.y_sqr + map.size_sqr)
			write(1, map.map[i], x_max);
		else
		{
			print_line_by_putchars(&map, i, 0);
		}
		i++;
		ft_putchar('\n');
	}
}

void	do_calc_action(t_map *map, int x_max, int y, int **a)
{
	int		x;

	x = x_max - 1;
	while (x >= 0)
	{
		if (map->map[y][x] == map->c_obstacle)
			a[y][x] = 0;
		else if (y == map->argc - 1 || x == x_max - 1)
			a[y][x] = 1;
		else
		{
			a[y][x] = a[y + 1][x] + 1;
			if (a[y][x] > a[y + 1][x + 1] + 1)
				a[y][x] = a[y + 1][x + 1] + 1;
			if (a[y][x] > a[y][x + 1] + 1)
				a[y][x] = a[y][x + 1] + 1;
		}
		if (a[y][x] >= a[map->y_sqr][map->x_sqr])
		{
			map->x_sqr = x;
			map->y_sqr = y;
		}
		x--;
	}
}

void	get1_answer_for_map(t_map *map)
{
	int		y;
	int		**a;
	int		x_max;
	int		y_max;

	x_max = ft_strlen(map->map[0]);
	y_max = map->argc;
	a = malloc(y_max * sizeof(int*));
	y = y_max - 1;
	map->x_sqr = x_max - 1;
	map->y_sqr = y_max - 1;
	while (y >= 0)
	{
		a[y] = malloc(x_max * sizeof(int));
		do_calc_action(map, x_max, y, a);
		y--;
	}
	map->size_sqr = a[map->y_sqr][map->x_sqr];
	y = y_max - 1;
	while (y >= 0)
		free(a[y--]);
	free(a);
}
