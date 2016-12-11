/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 12:28:34 by okres             #+#    #+#             */
/*   Updated: 2016/11/16 12:50:34 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	repid(char *argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(argv[i] != '\0')
	{
		if (argv[i] >= 'a' && argv[i] <= 'z')
		{
			j = argv[i] - 96;
			while (j > 0)
			{
				printf("%c",argv[i]);
				j--;
			}
		}
		i++;
	}
}
int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		repid(argv[1]);
	}
}
