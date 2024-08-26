/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:18:54 by mubulbul          #+#    #+#             */
/*   Updated: 2024/08/19 01:12:20 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int		i;
	int		a;
	int		j;

	a = 0;
	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		i++;
	}
	while (a < i)
	{
		if (!(str[a] >= '0' && str[a] <= '9'))
			j = 0;
		a++;
	}
	return (j);
}
