/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iam.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:28:56 by okres             #+#    #+#             */
/*   Updated: 2016/11/04 17:12:46 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	gugu(char *a, char b, char c)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] == b)
		{
			ft_putchar(c);
		}
		else
		{
			ft_putchar(a[i]);
		}
		i++;
	}
}
int				main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (!(argv[3][1] != 0) || (argv[2][1] != 0))
		{
			gugu(argv[1], argv[2][0], argv[3][0]);
		}
	}
	ft_putchar('\n');
	return (0);
}
