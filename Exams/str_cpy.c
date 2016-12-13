/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_cpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:31:03 by okres             #+#    #+#             */
/*   Updated: 2016/11/10 18:53:34 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>
#include <stdio.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putstr(char *arr)
{
	int index;

	index = 0;
	while (arr[index] != '\0')
	{
		ft_putchar(arr[index]);
		index++;
	}
}
char	*str_cpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
int		main(void)
{
	char a[40];
	char *b = "abcd";
	ft_putstr(strcpy(a,b));
	printf("%s", strcpy(a,b));
	return 0;
}
