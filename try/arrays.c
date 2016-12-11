/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrays.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 09:26:20 by okres             #+#    #+#             */
/*   Updated: 2016/10/31 12:35:39 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void replace_first_symb(char *str)
{
	str[0] = 'Y';
}

void replace_first_el_betw_arr(char *str, char * dest)
{
	str[4] = dest[4];
}
int		main(void)
{
	char str1[] = "Hello";
	char str2[] = "123456";	
	
	char abc[2];
	int a = 54321;
	char symb = a + '0';
	abc[0] = a + '0';
	abc[1] = 0;

	ft_putchar(abc[0]);
	ft_putchar(abc[1]);
	ft_putchar(symb);
	return(0);
}
