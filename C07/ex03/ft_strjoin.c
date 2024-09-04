/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:40:28 by mubulbul          #+#    #+#             */
/*   Updated: 2024/09/02 19:17:20 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	sum_size(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	strs_size;
	int	sep_size;

	i = 0;
	j = -1;
	strs_size = 0;
	sep_size = 0;
	while (i < size)
	{
		j = -1;
		while (strs[i][++j])
			strs_size++;
		i++;
	}
	while (sep[sep_size])
		sep_size++;
	return (strs_size + (size -1) * sep_size + 1);
}

int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (original_dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_size;
	char	*result;
	char	*ptr;

	i = -1;
	if (size <= 0)
		return ((char *)malloc(1));
	total_size = sum_size(size, strs, sep);
	result = (char *)malloc(total_size * sizeof(char));
	if (!result)
		return (NULL);
	ptr = result;
	while (++i < size)
	{
		ft_strcpy(ptr, strs[i]);
		ptr += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(ptr, sep);
			ptr += ft_strlen(sep);
		}
	}
	*ptr = '\0';
	return (result);
}
