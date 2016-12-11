/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   saym_numb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 21:25:57 by okres             #+#    #+#             */
/*   Updated: 2016/11/11 11:46:44 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int dif(char a, char *b);
void saym_num(char *str, char *str1)
{
//	printf("3");
	int i;
	int j;
	int z;
	char *tmp;

	i = 0;
	z = 0;
//	tmp[0] = str[0];
	while (str[i] != '\0')
	{
		//printf("2");
		j = 0;
		while (str1[j] != '\0' && str1[j] == str[i])
		{
				//tmp[z] = str[j];
			//	z++;
				printf("%c", str[j]);
			j++;
		}
	i++;
	}
}

int 	dif(char a, char *b)
{
	int i;

	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == a)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
int		main(int argc, char **argv)
{
	if (argc == 3)
	{
	//	printf("4");
 		saym_num(argv[1],argv[2]);
	}
	return 0;
}
