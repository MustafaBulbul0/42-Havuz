/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 10:02:58 by mubulbul          #+#    #+#             */
/*   Updated: 2024/08/20 09:27:24 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	result(int a, int nb);
void	operation(int nb);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= (-1);
		operation(nb);
	}
	else
		operation(nb);
}

void	operation(int nb)
{
	int	c;
	int	b;
	int	a;

	a = 1;
	b = 10;
	while (a > 0)
	{
		c = nb / b;
		if (c == 0)
		{
			break ;
		}
		a++;
		b *= 10;
	}
	result(a, nb);
}

void	result(int a, int nb)
{
	int		h;
	int		i;
	int		d;
	char	z;

	h = 1;
	i = 1;
	d = 0;
	while (h < a)
	{
		i *= 10;
		h++;
	}
	while (d < a)
	{
		z = (nb / i) + '0';
		write(1, &z, 1);
		d++;
		nb %= i;
		i /= 10;
	}
}
