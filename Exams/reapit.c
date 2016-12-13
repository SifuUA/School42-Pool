/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reapit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 18:55:54 by okres             #+#    #+#             */
/*   Updated: 2016/11/11 12:55:25 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void reapet(char *argv)
{
	int i;
	int n;

	i = 0;
	while (argv[i] != '\0')
	{
		if ((argv[i] > 64) && (argv[i] < 91))
		{
			n = argv[i] - 64;
			while (n > 0)
			{
				printf("%c", argv[i]);
				n--;
			}
		}
		else if ((argv[i] > 96) && (argv[i] < 123))
		{
			n = argv[i] - 96;
			while (n > 0)
			{
				printf ("%c", argv[i]);
				n--;
			}
		}
		else
			printf ("%c", argv[i]);
		i++;		
	}
}
int		main(int argc, char **argv)
{	
	if (argc == 2)
	{
		reapet(argv[1]);
	}
	else
	printf("ERROR");
	return (0);
}
