/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_pointers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 10:43:54 by okres             #+#    #+#             */
/*   Updated: 2016/11/07 11:35:02 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
typedef void(*fanptr)(char);
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	//void(*f)(char);
	fanptr f;
	f = &ft_putchar;
	f('z');
}

