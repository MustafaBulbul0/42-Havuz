/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:49:22 by mubulbul          #+#    #+#             */
/*   Updated: 2024/08/25 16:08:59 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define SIZE 4

void	ft_putstr(char *str);
int		*parse_input(char *str);
int		solve(int grid[SIZE][SIZE], int *input, int row, int col);

void	arr(int grid[SIZE][SIZE])
{
	int	rw;
	int	cl;

	rw = 0;
	while (rw < SIZE)
	{
		cl = 0;
		while (cl < SIZE)
		{
			grid[rw][cl] = 0;
			cl++;
		}
		rw++;
	}
}

int	main(int argc, char **argv)
{
	int	grid[SIZE][SIZE];
	int	*input;

	arr(grid);
	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	input = parse_input(argv[1]);
	if (!input)
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (!solve(grid, input, 0, 0))
		ft_putstr("Error\n");
	free(input);
	return (0);
}
