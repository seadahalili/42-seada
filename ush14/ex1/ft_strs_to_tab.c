/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slame <shefqet.lame@learner.42.tech>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 11:45:09 by slame             #+#    #+#             */
/*   Updated: 2026/02/18 13:00:52 by slame            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
// #include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*array;
	int			i;

	array = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		if (!array[i].copy)
		{
			while (--i >= 0)
				free(array[i].copy);
			free(array);
			return (NULL);
		}
		i++;
	}
	array[i].str = 0;
	return (array);
}

// int	main(void)
// {
// 	char		*test_strings[] = {"Hello", "World", "42", "Piscine"};
// 	int			ac;
// 	t_stock_str	*struct_array;
// 	int			i;

// 	ac = 4;
// 	struct_array = ft_strs_to_tab(ac, test_strings);
// 	if (!struct_array)
// 	{
// 		printf("Allocation failed!\n");
// 		return (1);
// 	}
// 	printf("--- TESTING LOGIC ---\n");
// 	for (i = 0; struct_array[i].str != 0; i++)
// 	{
// 		printf("[%d] Size: %d | Content: %s | Copy: %s\n", i,
// 			struct_array[i].size, struct_array[i].str, struct_array[i].copy);
// 		if (struct_array[i].str != struct_array[i].copy)
// 			printf("    -> Address Check: Deep copy OK\n");
// 	}
// 	printf("\n--- CLEANING UP ---\n");
// 	i = 0;
// 	while (i < ac)
// 	{
// 		printf("Freeing copy of element %d...\n", i);
// 		free(struct_array[i].copy);
// 		i++;
// 	}
// 	printf("Freeing the array structure...\n");
// 	free(struct_array);
// 	printf("Done. Valgrind should be happy now!\n");
// 	return (0);
// }
