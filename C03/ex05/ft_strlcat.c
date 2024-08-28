/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 08:38:33 by mubulbul          #+#    #+#             */
/*   Updated: 2024/08/25 05:59:12 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	k;
	unsigned int	j;
	unsigned int	l;

	i = 0;
	k = 0;
	j = 0;
	l = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (nb < j)
		l = nb;
	else
		l = j;
	while (k < l)
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (dest);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		i;
	char	*text;

	i = 0;
	text = ft_strncat(dest, src, size);
	while (text[i] != '\0')
		i++;
	return (i);
}
