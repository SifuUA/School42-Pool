/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 13:02:33 by okres             #+#    #+#             */
/*   Updated: 2016/11/15 14:17:53 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	buf_clean(buf)
{
	int i;

	i = 0;
	while (i < 100)
	{
		buf[i] = '\0';
		i++;
	}
}
void	wd_match(char *buf, char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i])

	}
}
int		main(int argc, char **argv)
{
	char buf[100];

	buf_clean(buf);
	if (argc == 3)
	{
		wd_match(buf, argv[1]);
		wd_match(buf, argv[2]);
	}
}
