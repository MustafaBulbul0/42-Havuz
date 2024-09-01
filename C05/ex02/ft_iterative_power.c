/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:13:33 by mubulbul          #+#    #+#             */
/*   Updated: 2024/08/27 16:15:25 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	fnb;
	int	sign;

	i = 1;
	fnb = nb;
	sign = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0 && nb < 0)
	{
		if (power % 2 == 1)
			sign = -1;
		nb *= -1;
	}
	while (i < power)
	{
		nb *= fnb;
		i++;
	}
	return (nb * sign);
}
