/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrigo <nrigo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:24:47 by nrigo             #+#    #+#             */
/*   Updated: 2026/02/14 13:24:49 by nrigo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row(int grid[4][4], int row, int num)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (grid[row][col] == num)
			return (0);
		col++;
	}
	return (1);
}

int	check_col(int grid[4][4], int col, int num)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (grid[row][col] == num)
			return (0);
		row++;
	}
	return (1);
}
