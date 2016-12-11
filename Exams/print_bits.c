/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dvoichn_system.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:21:20 by okres             #+#    #+#             */
/*   Updated: 2016/11/12 21:03:44 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void print_bits(unsigned char a)
{
	int div;
	int res;

	res = a;
	div = 128;
	while (div != 0)
	{
		if (div <= res)
		{
			write(1, "1", 1);
			res = res % div;
		}
		else
			write(1, "0", 1);
		div = div / 2;
	}
}
int		main(void)
{
	print_bits(2);
	return (0);
}
