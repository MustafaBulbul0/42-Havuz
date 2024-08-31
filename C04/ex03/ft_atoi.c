/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 20:08:26 by mubulbul          #+#    #+#             */
/*   Updated: 2024/08/26 10:06:51 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 0;
	while (str[i] == 32 || (str[i] < 14 && str[i] > 8))
		i++;
	while (str[i] != '\0' && (str[i] == 45 || str[i] == 43))
	{
		if (str[i] == 45)
			j *= -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] > 47 && str[i] < 58))
	{
		k = (k * 10) + (str[i] - 48);
		i++;
	}
	return (k * j);
}
