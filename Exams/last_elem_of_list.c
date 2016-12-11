/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_elem_of_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 16:53:19 by okres             #+#    #+#             */
/*   Updated: 2016/11/10 17:19:44 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *array)
{
	int index;

	index = 0;
	while (array[index] != '\0')
	{
		write(1, &array[index], 1);
		index++;
	}
}
int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_putstr(argv[argc - 1]);
	}
	return (0);
}
