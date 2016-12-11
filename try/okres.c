/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:20:11 by okres             #+#    #+#             */
/*   Updated: 2016/11/06 18:45:05 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	sudoku_print(char **arr)
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(arr[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	get_sudoku_from_argv(int argc, char **argv)
{
	int result;
	int	i;
	int j;

	if (argc != 10)
		return (0);
	else
	{
		result = (1);
		i = 1;
		while (i <= 9)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				if (argv[i][j] != '.')
					if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
						result = 0;
				j++;
			}
			if (j != 9)
				result = 0;
			}
			i++;
		}
	}
	return (result);
}
