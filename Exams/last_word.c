/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 14:44:48 by okres             #+#    #+#             */
/*   Updated: 2016/11/13 15:41:35 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *str)
{
	int i;
	int j;
	char tmp[100];

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (str[i] == ' ')
	{
		i--;
	}
	while (str[i] != ' ')
	{
		tmp[j] = str[i];
		i--;
		j++;
	}
	while (j > 0)
	{
		write(1, &tmp[j - 1], 1);
		j--;
	}

}
int		main(int argc, char **argv)
{
	if (argc == 2)
	{

		last_word(argv[1]);
	}
}
