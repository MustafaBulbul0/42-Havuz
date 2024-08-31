/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 09:48:05 by mubulbul          #+#    #+#             */
/*   Updated: 2024/08/26 10:11:16 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(double pow, unsigned int nnb, int sign)
{
	unsigned int	res;
	char			c;

	if (sign == -1)
		write (1, "-", 1);
	while (pow > 0.9)
	{
		res = nnb / pow;
		nnb -= res * pow;
		c = res + '0';
		write(1, &c, 1);
		pow /= 10 ;
	}
}

void	ft_pow(unsigned int nnb, int sign)
{
	unsigned int	nnnb;
	int				i;
	int				j;
	double			pow;

	nnnb = nnb;
	i = 0;
	j = 0;
	pow = 1;
	while (nnnb != 0)
	{
		nnnb /= 10;
		i++;
	}
	while (j < i)
	{
		pow *= 10;
		j++;
	}
	pow /= 10;
	ft_putchar(pow, nnb, sign);
}

void	ft_putnbr(int nb)
{
	unsigned int	nnb;
	int				sign;

	sign = 1;
	if (nb == 0)
		write (1, "0", 1);
	if (nb < 0)
	{
		nb *= -1;
		nnb = nb;
		sign = -1;
	}
	else
		nnb = nb;
	ft_pow(nnb, sign);
}
