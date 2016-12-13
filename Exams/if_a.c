/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_a.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:11:47 by okres             #+#    #+#             */
/*   Updated: 2016/11/10 16:17:13 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ret_a(char *argv)
{
	int i;

	i = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] == 'a')
		{
			return (1);
		}
		i++;
	}
	return (0);

}
int		main(int argc, char **argv)
{
	int index;
	index = 1;
	if (argc == 1)
	{
		write(1,"a\n",3);
	}
	while (index < argc)
	{
		if (ret_a(argv[index]) == 1)
		{
			write(1,"a\n",3);
			return (0);
		}
		index++;
	}
	return (0);
}
