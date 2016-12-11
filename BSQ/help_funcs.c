/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oslutsky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:53:15 by oslutsky          #+#    #+#             */
/*   Updated: 2016/11/16 21:35:53 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"

int		ft_strlen(char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *s)
{
	int		n;

	if (s == 0)
		write(1, "NULL", 4);
	else
	{
		n = ft_strlen(s);
		write(1, s, n);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi_modified(char *s, char *c_e, char *c_o, char *c_f)
{
	int		s_len;
	int		i;
	int		res;

	res = 0;
	if (s != 0)
	{
		s_len = ft_strlen(s);
		*c_f = s[s_len - 1];
		*c_o = s[s_len - 2];
		*c_e = s[s_len - 3];
		i = 0;
		while (i < s_len - 3)
		{
			if (s[i] >= '0' && s[i] <= '9')
				res = res * 10 + s[i] - '0';
			else if (s[i] != ' ' && s[i] != '\t')
				break ;
			i++;
		}
		if (i != s_len - 3)
			return (0);
	}
	return (res);
}
