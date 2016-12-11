/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_creating.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oslutsky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 19:58:32 by oslutsky          #+#    #+#             */
/*   Updated: 2016/11/16 20:06:39 by oslutsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"

void	get_mem_for_rows(char *s, char ***tab, int *argc)
{
	int		i;

	if (s == 0)
	{
		*tab = 0;
		*argc = 0;
	}
	else
	{
		i = 0;
		*argc = 0;
		while (s[i] != '\0')
		{
			if (s[i] == '\n')
				(*argc)++;
			i++;
		}
		(*tab) = (char**)malloc(*argc * sizeof(char*));
	}
}

char	*copy_row(char **s)
{
	int		i;
	char	*res;

	i = 0;
	while ((*s)[i] != '\0' && (*s)[i] != '\n')
		i++;
	res = (char*)malloc((i + 1) * sizeof(char));
	i = 0;
	while (**s != '\0' && **s != '\n')
	{
		res[i] = **s;
		i++;
		(*s)++;
	}
	res[i] = '\0';
	return (res);
}

void	ft_split_newlines(char *s, char ***tab, int *argc)
{
	int		i_row;

	get_mem_for_rows(s, tab, argc);
	i_row = 0;
	while (*s != '\0')
	{
		(*tab)[i_row] = copy_row(&s);
		if (*s != '\0')
			s++;
		i_row++;
	}
}

t_map	get_map2(int count_rows, char **tab)
{
	t_map	res;

	if (count_rows == 0)
	{
		res.argc = 0;
		return (res);
	}
	res.argc = ft_atoi_modified(tab[0],
			&(res.c_empty), &(res.c_obstacle), &(res.c_full));
	if (res.argc == 0)
		return (res);
	if (res.argc != count_rows - 1)
	{
		res.argc = 0;
		return (res);
	}
	res.map = tab + 1;
	return (res);
}

int		test_map(t_map map)
{
	int		i;
	int		j;
	int		first_len;

	if (map.argc == 0)
		return (0);
	first_len = ft_strlen(map.map[0]);
	if (first_len == 0)
		return (0);
	i = 0;
	while (i < map.argc)
	{
		j = 0;
		while (map.map[i][j] != '\0')
		{
			if (map.map[i][j] != map.c_empty && map.map[i][j] != map.c_obstacle)
				return (0);
			j++;
		}
		if (j != first_len)
			return (0);
		i++;
	}
	return (1);
}
