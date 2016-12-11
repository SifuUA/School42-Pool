/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 19:52:40 by okres             #+#    #+#             */
/*   Updated: 2016/11/11 20:07:22 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_btree.h"

int		main(void)
{
	t_btree *first;
	t_btree *second;
	int i;

	i = 1;
	first = 0;
	first = btree_create_node("Hello!");
	second = first;
	while (second != 0)
	{
		printf("%d. %s", i, second->item);
		second = second->right;
		i++;
	}
	return (0);
}
