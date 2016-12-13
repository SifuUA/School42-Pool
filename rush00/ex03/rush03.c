/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 10:02:48 by adzikovs          #+#    #+#             */
/*   Updated: 2016/10/29 20:24:58 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int sizex, int sizey)
{
	int	x;
	int	y;

	y = 1;
	while (y <= sizey)
	{
		x = 1;
		while (x <= sizex)
		{
			if ((y == 1 || y == sizey) && x == 1)
				ft_putchar('A');
			else if ((y == 1 || y == sizey) && x == sizex)
				ft_putchar('C');
			else if (y == 1 || y == sizey)
				ft_putchar('B');
			else if (x == 1 || x == sizex)
				ft_putchar('B');
			else
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
