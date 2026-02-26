/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slame <shefqet.lame@learner.42.tech>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:04:28 by slame             #+#    #+#             */
/*   Updated: 2026/02/18 14:23:26 by slame            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
// #include <stdio.h>
// #include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

// int	main(void)
// {
// 	char		*test_strings[] = {"Hello", "42", "Piscine", "Rocks"};
// 	int			ac;
// 	t_stock_str	*result;
// 	int			i;

// 	ac = 4;
// 	result = ft_strs_to_tab(ac, test_strings);
// 	if (!result)
// 		return (1);
// 	printf("--- Structure Check ---\n");
// 	for (i = 0; result[i].str != 0; i++)
// 	{
// 		printf("Index: %d\n", i);
// 		printf("  Size: %d\n", result[i].size);
// 		printf("  Original (str): %s (Address: %p)\n", result[i].str,
// 			(void *)result[i].str);
// 		printf("  Copy (copy):     %s (Address: %p)\n", result[i].copy,
// 			(void *)result[i].copy);
// 		if (result[i].str != result[i].copy)
// 			printf("  Status: Deep copy successful!\n\n");
// 		else
// 			printf("  Status: ERROR - addresses are the same!\n\n");
// 	}
// 	i = 0;
// 	while (i < ac)
// 	{
// 		free(result[i].copy);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }
