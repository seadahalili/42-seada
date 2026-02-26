/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clues.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrigo <nrigo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:25:04 by nrigo             #+#    #+#             */
/*   Updated: 2026/02/14 13:25:07 by nrigo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_visible(int arr[4])
{
	int	max;
	int	visible;
	int	i;

	max = 0;
	visible = 0;
	i = 0;
	while (i < 4)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			visible++;
		}
		i++;
	}
	return (visible);
}

int	check_row_clues(int grid[4][4], int clues[16], int row)
{
	int	arr[4];
	int	i;

	i = 0;
	while (i < 4)
	{
		arr[i] = grid[row][i];
		i++;
	}
	if (count_visible(arr) != clues[8 + row])
		return (0);
	i = 0;
	while (i < 4)
	{
		arr[i] = grid[row][3 - i];
		i++;
	}
	if (count_visible(arr) != clues[12 + row])
		return (0);
	return (1);
}

int	check_col_clues(int grid[4][4], int clues[16], int col)
{
	int	arr[4];
	int	i;

	i = 0;
	while (i < 4)
	{
		arr[i] = grid[i][col];
		i++;
	}
	if (count_visible(arr) != clues[col])
		return (0);
	i = 0;
	while (i < 4)
	{
		arr[i] = grid[3 - i][col];
		i++;
	}
	if (count_visible(arr) != clues[4 + col])
		return (0);
	return (1);
}
