/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 16:28:11 by exam              #+#    #+#             */
/*   Updated: 2016/11/11 16:52:38 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i;
	int count;
	char *tmp;

	i = 0;
	count = 0;
	while (src[i] != '\0')
	{
		count++;
		i++;
	}
	i = 0;
	tmp = (char*)malloc(sizeof(char) * count + 1);
	while (src[i] != '\0')
	{
		tmp[i] = src[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
