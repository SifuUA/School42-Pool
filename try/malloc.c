/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 12:33:57 by okres             #+#    #+#             */
/*   Updated: 2016/11/04 16:24:46 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void ft_putstr(char *str);

#include <stdlib.h> 
#define LEN		42

int		main()
{
	int i;
	char *str;

	str = (char*)malloc(sizeof(*str) * (LEN + 1));
	i = 0;
	while (i < LEN)
{
	str[i] = '0' + (i % 10);
	i++;
}
str[i] = '\0';
//free(str);
//ft_putstr(str);
//ft_putstr("\n");
while(1);
return(0);
}
