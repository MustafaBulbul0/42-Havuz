/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:32:52 by mubulbul          #+#    #+#             */
/*   Updated: 2024/08/27 15:00:19 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	nnb;
	int	result;

	i = 0;
	nnb = nb;
	result = 1;
	if (nb >= 13 || nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (i < nb)
	{
		result *= nnb;
		i++;
		nnb--;
	}
	return (result);
}
