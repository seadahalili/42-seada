/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrigo <nrigo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:24:04 by nrigo             #+#    #+#             */
/*   Updated: 2026/02/14 13:24:16 by nrigo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			parse_input(char *str, int clues[16]);
int			solve(int grid[4][4], int clues[16], int row, int col);
void		print_grid(int grid[4][4]);

static void	init_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	grid[4][4];
	int	clues[16];

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (!parse_input(argv[1], clues))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	init_grid(grid);
	if (solve(grid, clues, 0, 0))
		print_grid(grid);
	else
		write(1, "Error\n", 6);
	return (0);
}
