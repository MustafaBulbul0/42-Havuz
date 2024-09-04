/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:26:30 by mubulbul          #+#    #+#             */
/*   Updated: 2024/09/01 18:55:48 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	counter;
	int	tmp_min;
	int	*num;

	counter = 0;
	tmp_min = min;
	if (min >= max)
		return (0);
	while (tmp_min < max)
	{
		counter++;
		++tmp_min;
	}
	num = (int *)malloc(counter * sizeof(int));
	counter = 0;
	while (min < max)
	{
		num[counter] = min;
		min++;
		counter++;
	}
	return (num);
}
