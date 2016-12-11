/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 21:07:17 by okres             #+#    #+#             */
/*   Updated: 2016/11/17 15:01:50 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	clear(char *str)
{
	int i;
	i = 0;
	while (i < 100)
	{
		str[i] = '\0';
		i++;
	}
}
void	my_union(char *str, char *second)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (second && str[i] != second[j])
		{
			if (second[j] == '\0')
			{
				second[j] = str[i];
				break;
			}
			j++;
		}
		i++;
	}
}
int		main(int argc, char **argv)
{
	int i;

	i = 0;
	char tmp[100];
	
	clear(tmp);
	if(argc == 3)
	{
		my_union(argv[1], tmp);
		my_union(argv[2], tmp);
		ft_putstr(tmp);
	}
	write(1, "\n", 1);
	return (0);
}
