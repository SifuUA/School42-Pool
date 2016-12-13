/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 12:41:15 by okres             #+#    #+#             */
/*   Updated: 2016/11/15 12:59:48 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		max(int *arr, unsigned int len)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (arr[i] < len)
	{
		if (res < arr[i])
			res = arr[i];
		i++;
	}
	return (res);
}
int		main(void)
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 9,};
	printf("%d", max(arr, 6));
	return (0);
}
