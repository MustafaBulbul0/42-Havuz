/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:36:36 by mubulbul          #+#    #+#             */
/*   Updated: 2024/08/24 23:55:51 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	counter(char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;
	int	l;

	j = 0;
	i = counter(to_find);
	if (i == 0)
		return (str);
	while (str[j] != '\0')
	{
		k = 0;
		l = 0;
		while (to_find[k] != '\0' && str[j] == to_find[0])
		{
			if (str[j + k] == to_find[k])
				l++;
			if (i == l)
				return (&str[j]);
			k++;
		}
		j++;
	}
	return (0);
}
