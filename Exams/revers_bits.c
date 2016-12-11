/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revers_bits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 15:43:01 by okres             #+#    #+#             */
/*   Updated: 2016/11/15 12:31:26 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		my_atoi(char *str);
void	ft_putstr(char *str);
int		m_sqrt(int num, int step);

unsigned char rec(char *arr, int i)
{
	printf("%d\n", i);
	if (i < 0)
	{
		return (0);
	}
		printf("%d\n", i);
		return (rec(arr,i - 1) + arr[i] * m_sqrt(2,i));
}
int m_sqrt(int num, int step)
{
	if (step == 0)
	{
		return 1;
	}
	else if (step > 0)
	{
		return (num * m_sqrt(num, step - 1)); 
	}
	else
		return 0;
}
unsigned char revers_bit(unsigned char octet)
{
	int i;
	int j;
	int res;
	int div;
	char fin[10];

	i = 7;
	j = 0;
	div = 128;
	res = octet;
	while (div > 0)
	{
		if (res >= div)
		{
			fin[i] = '1';
			res = res % div;
			i--;
		}
		else
		{
			fin[i] = '0';
			i--;
		}
		div = div / 2;
	}
	i = 7;
	printf("%d\n", rec(fin, i));
	return (res);
}
int		main(void)
{
	//printf("%d", m_sqrt(2,3));
	revers_bit(65);
	
	return (0);
}
