/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 14:11:35 by okres             #+#    #+#             */
/*   Updated: 2016/11/13 14:42:15 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	first_word(char *str)
{
	int i;
	while (str[i] == ' ')
	{
		i++;
	}
	while (str[i] != ' ')
	{
		write(1, &str[i], 1);
		i++;
	}
	
}

int		main(int argc, char **argv)
{
	first_word(argv[1]);
	return (0);
}
