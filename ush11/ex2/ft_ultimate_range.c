/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 03:06:58 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/17 13:23:22 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// #include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

// void	test_range(int min, int max)
// {
// 	int	*arr;
// 	int	size;
// 	int	i;

// 	printf("Test: min = %d, max = %d\n", min, max);
// 	size = ft_ultimate_range(&arr, min, max);
// 	printf("Returned size: %d\n", size);
// 	if (size > 0)
// 	{
// 		printf("Array: ");
// 		i = 0;
// 		while (i < size)
// 		{
// 			printf("%d ", arr[i]);
// 			i++;
// 		}
// 		printf("\n");
// 		free(arr);
// 	}
// 	else if (size == 0)
// 		printf("Range is empty (min >= max)\n");
// 	else
// 		printf("Malloc failed\n");
// 	printf("--------------------------\n");
// }

// int	main(void)
// {
// 	test_range(3, 7);
// 	test_range(-3, 31);
// 	test_range(5, 5);
// 	test_range(10, 5);
// 	return (0);
// }