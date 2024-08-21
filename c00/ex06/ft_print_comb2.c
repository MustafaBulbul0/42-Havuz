/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:52:13 by mubulbul          #+#    #+#             */
/*   Updated: 2024/08/15 14:09:51 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writer(int i, int j);
void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			writer (i, j);
			j++;
		}
		i++;
	}
}

void	writer(int i, int j)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = (i / 10) + '0';
	b = (i % 10) + '0';
	c = (j / 10) + '0';
	d = (j % 10) + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (i != 98 || j != 99)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}
