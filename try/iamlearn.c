/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iamlearn.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 22:20:32 by okres             #+#    #+#             */
/*   Updated: 2016/10/27 23:12:26 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
int ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if(a != 7)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
	return 0;
}
void ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a != '7')
	{
		b = a + 1;
		while (b != '8')
		{
			c = b + 1;
			while (c != '9')
			{
				ft_putchar(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
int		main(void)
{
	ft_print_comb();
	return 0;
}
