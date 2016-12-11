/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 20:38:16 by okres             #+#    #+#             */
/*   Updated: 2016/11/13 17:37:19 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>



int my_atoi(char *str)
{
	int i;
	int minus;
	int res;

	i = 0;
	minus = 1;
	res = 0;
	while (str[i] == ' ')
	{
			i++;
	}
	if (str[i] == '-')
	{
		minus = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
			res = res * 10 + str[i] - '0';
			i++;
		}
	return res * minus;

}
/*int		main(void)
{
	char *a = "-+abcd";
	char *b = "aabce";
	printf("%d\n",atoi(a));
	printf("%d",my_atoi(a));
}
*/
