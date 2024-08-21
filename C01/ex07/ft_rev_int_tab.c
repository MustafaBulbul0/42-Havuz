/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 01:43:16 by mubulbul          #+#    #+#             */
/*   Updated: 2024/08/19 03:26:33 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	z;

	i = 0;
	while (i < size / 2)
	{
		z = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = z;
		i++;
	}
}
