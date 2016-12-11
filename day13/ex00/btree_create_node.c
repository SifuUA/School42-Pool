/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 19:44:34 by okres             #+#    #+#             */
/*   Updated: 2016/11/11 20:02:14 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree *btree_create_node(void *item)
{
	t_btree *node;
	
	if(node)
	{
		node = (t_btree*)malloc(sizeof(t_btree));
		node->item = item;
		node->right = 0;
		node->left = 0;
	}
	return (node);
}
