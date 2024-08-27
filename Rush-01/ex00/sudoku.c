/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:49:28 by mubulbul          #+#    #+#             */
/*   Updated: 2024/08/27 11:13:14 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define SIZE 4

int		check_views(int grid[SIZE][SIZE], int *input);
int		check_views(int grid[SIZE][SIZE], int *input);
void	print_grid(int grid[SIZE][SIZE]);

int	is_valid(int grid[SIZE][SIZE], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	solve(int grid[SIZE][SIZE], int *input, int row, int col)
{
	int	num;

	if (row == SIZE && check_views(grid, input))
	{
		print_grid(grid);
		return (1);
	}
	if (row == SIZE && !check_views(grid, input))
		return (0);
	if (col == SIZE)
		return (solve(grid, input, row + 1, 0));
	num = 1;
	while (num <= SIZE)
	{
		if (is_valid(grid, row, col, num))
		{
			grid[row][col] = num;
			if (solve(grid, input, row, col + 1))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}

int	*parse_input(char *str)
{
	int	i;
	int	*input;

	i = 0;
	input = (int *)malloc(SIZE * 4 * sizeof(int));
	if (!input)
		return (NULL);
	while (i < SIZE * 4)
	{
		if (str[i * 2] >= '1' && str[i * 2] <= '4')
			input[i] = str[i * 2] - '0';
		else
		{
			free(input);
			return (NULL);
		}
		i++;
	}
	return (input);
}
