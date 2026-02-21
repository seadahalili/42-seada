/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 03:58:12 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/17 17:19:07 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// #include <stdio.h>

int		ft_atoi_base(char *str, char *base);
int		ft_base_valid(char *base);
char	*ft_putnbr_base(int nbr, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	number;

	if (!ft_base_valid(base_from) || !ft_base_valid(base_to))
		return (NULL);
	number = ft_atoi_base(nbr, base_from);
	return (ft_putnbr_base(number, base_to));
}

// void	test_convert(char *nbr, char *base_from, char *base_to)
// {
// 	char	*result;

// 	printf("Input number: \"%s\"\n", nbr);
// 	printf("Base from: \"%s\"\n", base_from);
// 	printf("Base to: \"%s\"\n", base_to);
// 	result = ft_convert_base(nbr, base_from, base_to);
// 	if (!result)
// 	{
// 		printf("Conversion failed (invalid base or malloc error)\n");
// 	}
// 	else
// 	{
// 		printf("Result: \"%s\"\n", result);
// 		free(result);
// 	}
// 	printf("--------------------------\n");
// }

// int	main(void)
// {
// 	test_convert("1010", "01", "0123456789");
// 	test_convert("42", "0123456789", "01");
// 	test_convert("-2A", "0123456789ABCDEF", "01234567");
// 	test_convert("   ---101", "01", "0123456789");
// 	test_convert("123", "0", "0123456789"); /* invalid base */
// 	return (0);
// }