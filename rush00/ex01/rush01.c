/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 10:02:48 by adzikovs          #+#    #+#             */
/*   Updated: 2016/10/29 20:20:29 by adzikovs         ###   ########.fr       */
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
			if ((x == 1 && y == 1) || (x == sizex && y == sizey))
				ft_putchar('/');
			else if ((x == 1 && y == sizey) || (x == sizex && y == 1))
				ft_putchar('\\');
			else if (x == 1 || y == 1 || x == sizex || y == sizey)
				ft_putchar('*');
			else
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
