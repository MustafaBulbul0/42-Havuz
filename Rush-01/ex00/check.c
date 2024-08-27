/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:49:14 by mubulbul          #+#    #+#             */
/*   Updated: 2024/08/25 16:34:03 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define SIZE 4

int	up_control(int grid[SIZE][SIZE], int *input)
{
	int	i;
	int	j;
	int	max;
	int	visible;

	i = 0;
	while (i < SIZE)
	{
		max = 0;
		visible = 0;
		j = 0;
		while (j < SIZE)
		{
			if (grid[j][i] > max)
			{
				max = grid[j][i];
				visible++;
			}
			j++;
		}
		if (visible != input[i])
			return (0);
		i++;
	}
	return (1);
}

int	down_control(int grid[SIZE][SIZE], int *input)
{
	int	i;
	int	j;
	int	max;
	int	visible;

	i = 0;
	while (i < SIZE)
	{
		max = 0;
		visible = 0;
		j = SIZE - 1;
		while (j >= 0)
		{
			if (grid[j][i] > max)
			{
				max = grid[j][i];
				visible++;
			}
			j--;
		}
		if (visible != input[i + SIZE])
			return (0);
		i++;
	}
	return (1);
}

int	left_control(int grid[SIZE][SIZE], int *input)
{
	int	i;
	int	j;
	int	max;
	int	visible;

	i = 0;
	while (i < SIZE)
	{
		max = 0;
		visible = 0;
		j = 0;
		while (j < SIZE)
		{
			if (grid[i][j] > max)
			{
				max = grid[i][j];
				visible++;
			}
			j++;
		}
		if (visible != input[i + 2 * SIZE])
			return (0);
		i++;
	}
	return (1);
}

int	right_control(int grid[SIZE][SIZE], int *input)
{
	int	i;
	int	j;
	int	max;
	int	visible;

	i = 0;
	while (i < SIZE)
	{
		max = 0;
		visible = 0;
		j = SIZE - 1;
		while (j >= 0)
		{
			if (grid[i][j] > max)
			{
				max = grid[i][j];
				visible++;
			}
			j--;
		}
		if (visible != input[i + 3 * SIZE])
			return (0);
		i++;
	}
	return (1);
}

int	check_views(int grid[SIZE][SIZE], int *input)
{
	if (!left_control(grid, input))
		return (0);
	if (!right_control(grid, input))
		return (0);
	if (!up_control(grid, input))
		return (0);
	if (!down_control(grid, input))
		return (0);
	return (1);
}
