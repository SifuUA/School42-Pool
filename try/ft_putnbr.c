/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 17:30:44 by okres             #+#    #+#             */
/*   Updated: 2016/10/31 17:46:05 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int	pow_10;
	int	num;

	pow_10 = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == 0)
	{
		ft_putchar('0');
	}
	while (pow_10 * 10 < nb)
	{
		pow_10 *= 10;
	}
	while (nb > 0)
	{
		num = nb / pow_10;
		nb = nb - num * pow_10;
		ft_putchar(num + '0');
		pow_10 /= 10;
	}
}
