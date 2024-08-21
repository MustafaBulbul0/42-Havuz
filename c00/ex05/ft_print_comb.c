/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:54:15 by mubulbul          #+#    #+#             */
/*   Updated: 2024/08/15 18:34:12 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(int i, int j, int k);

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 8)
	{
		j = i + 1;
		while (j < 9)
		{
			k = j + 1;
			while (k < 10)
			{
				put_char(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

void	put_char(int i, int j, int k)
{
	char	l;
	char	m;
	char	n;

	if (i != j && i != k && j != k)
	{
		l = i + '0';
		m = j + '0';
		n = k + '0';
		write(1, &l, 1);
		write(1, &m, 1);
		write(1, &n, 1);
		if (i != 7 || j != 8 || k != 9)
		{
			write(1, ", ", 2);
		}
	}
}
