/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 14:28:06 by okres             #+#    #+#             */
/*   Updated: 2016/11/16 13:06:29 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_rev(char *str)
{
	int		i;
	int		j;
	char	*arr;
	
	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	arr = malloc(sizeof(char) * i + 1);
	while (i > 0)
	{
		arr[j] = str[i];
		printf("%c", arr[j]);
		j++;
		i--;
	}
	return (arr);
}
int		main(void)
{
	char *a;
	a = "abcdefgh";
	ft_rev(a);
}
