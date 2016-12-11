/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:34:31 by exam              #+#    #+#             */
/*   Updated: 2016/11/17 15:11:22 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	hz(char a, char *tmp)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while(tmp[i] != '\0')
	{
		if(tmp[i] == a)
		{
			count++;
		}
		i++;
	}
	return (count);
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	find(char *a, char *b, int i, int j)
{
	int k;
	char tmp[100];

	i = 0;
	k = 0;
	while (a[i] != '\0')
	{
		j = 0;
		while (b[j] != '\0')
		{
			if (b[j] == a[i] && hz(b[j], tmp) == 0)
			{
				tmp[k] = b[j];
				ft_putchar(tmp[k]);
				j++;
				k++;
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
	int j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
	while (argv[1][i] != '\0')
		i++;
	while (argv[2][j] != '\0')
		j++;
		if (i < j)
			find(argv[1], argv[2], 0, 0);
		else
			find(argv[2], argv[1], 0, 0);
	}
	ft_putchar('\n');
	return (0);
}
