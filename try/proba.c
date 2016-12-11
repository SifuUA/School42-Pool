/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proba.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:48:18 by okres             #+#    #+#             */
/*   Updated: 2016/11/04 16:28:45 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void repl(char *a, char b, char c )
{
	int index;

	index = 0;
	while (a[index] != '\0')
	{
		if (a[index] == b)
		{
			ft_putchar(c);
		}
		else
		{
			ft_putchar(a[index]);
		}
		index++;
	}
}
int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (!(argv[3][1] != 0) || (argv[2][1] != 0))
		{
			repl(argv[1], argv[2][0], argv[3][0]);
		}
		write(1,"z",1);
	}
	ft_putchar('\n');
	return (0);
}
