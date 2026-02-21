/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 03:20:28 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/17 14:16:06 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	ft_total(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
		total += ft_strlen(strs[i++]);
	if (size > 1)
		total += ft_strlen(sep) * (size - 1);
	return (total);
}

static void	ft_fill(char *res, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			res[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				res[k++] = sep[j++];
		}
		i++;
	}
	res[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		total;

	if (size == 0)
	{
		res = malloc(1);
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	total = ft_total(size, strs, sep);
	res = malloc(total + 1);
	if (!res)
		return (NULL);
	ft_fill(res, size, strs, sep);
	return (res);
}

// static void	print_test(int size, char **arr, char *sep)
// {
// 	char	*result;
// 	int		i;

// 	printf("=====================================\n");
// 	printf("Testing with size = %d\n", size);
// 	printf("Separator = \"%s\"\n", sep);
// 	printf("Strings:\n");

// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("  [%d] \"%s\"\n", i, arr[i]);
// 		i++;
// 	}

// 	result = ft_strjoin(size, arr, sep);

// 	if (!result)
// 	{
// 		printf("Result: NULL (malloc failed)\n");
// 		return ;
// 	}

// 	printf("Result: \"%s\"\n", result);
// 	printf("Length: %lu\n", (unsigned long)ft_strlen(result));
// 	free(result);
// 	printf("Memory freed successfully \n");
// 	printf("=====================================\n\n");
// }

// int	main(void)
// {
// 	char	*arr1[] = {"Hello", "World", "42"};
// 	char	*arr2[] = {"One"};
// 	char	*arr3[] = {"A", "B", "C", "D"};
// 	char	*arr4[] = {};

// 	print_test(3, arr1, " - ");
// 	print_test(1, arr2, ",");
// 	print_test(4, arr3, "");
// 	print_test(0, arr4, ",");

// 	return (0);
// }