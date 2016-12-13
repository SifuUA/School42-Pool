/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:11:24 by exam              #+#    #+#             */
/*   Updated: 2016/11/11 14:23:42 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ch_case(char *argv)
{
	int i;

	i = 0;
	while(argv[i] != '\0')
	{
		if (argv[i] >= 'A' && argv[i] <='Z')
		{
			ft_putchar(argv[i] + 32);
		}
		else if (argv[i] >= 'a' && argv[i] <='z')
		{
			ft_putchar(argv[i] - 32);
		}
		else
			ft_putchar(argv[i]);
		i++;
	}
}
int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ch_case(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
