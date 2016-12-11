/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_space.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 11:50:09 by okres             #+#    #+#             */
/*   Updated: 2016/11/15 12:28:23 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
void del_space(char *argv)
{
	int i;
	
	i = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] == ' ')
		{
			i++;
		}
		else 
		{
			write(1, &argv[i], 1);
			i++;
		}
		if (argv[i] != ' ' && argv[i + 1] == ' ')
		{
			write(1, " ", 1);
		}


	}
}

int main (int argc, char **argv)
{
	del_space(argv[1]);	

	return 0;
}
