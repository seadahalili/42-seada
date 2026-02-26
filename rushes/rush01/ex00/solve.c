/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrigo <nrigo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:25:32 by nrigo             #+#    #+#             */
/*   Updated: 2026/02/14 13:29:55 by nrigo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* prototypes */
int	check_row(int grid[4][4], int row, int num);
int	check_col(int grid[4][4], int col, int num);
int	check_row_clues(int grid[4][4], int clues[16], int row);
int	check_col_clues(int grid[4][4], int clues[16], int col);

int	solve(int grid[4][4], int clues[16], int row, int col)
{
	int	num;

	num = 1;
	while (num <= 4)
	{
		if (check_row(grid, row, num) && check_col(grid, col, num))
		{
			grid[row][col] = num;
			if ((col == 3 && !check_row_clues(grid, clues, row)) || (row == 3
					&& !check_col_clues(grid, clues, col)))
				grid[row][col] = 0;
			else if ((row == 3 && col == 3) || solve(grid, clues, row
					+ (col == 3), (col + 1) % 4))
				return (1);
			else
				grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
