/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 23:06:28 by mubulbul          #+#    #+#             */
/*   Updated: 2024/08/20 23:15:36 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	result(int k, char *s1, char *s2)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (i < k)
	{
		if (s1[i] != s2[i])
		{
			l = (int)s1[i] - (int)s2[i];
			break ;
		}
		i++;
	}
	return (l);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;
	int				k;
	int				l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n == 0)
		return (0);
	if (n < i && n < j)
		k = n;
	else if (i > j)
		k = j + 1;
	else if (j > i)
		k = i + 1;
	else
		k = i;
	l = result(k, s1, s2);
	return (l);
}
