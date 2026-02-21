/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 23:46:07 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/08 00:18:07 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int *comb, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(comb[i] + '0');
		i++;
	}
	if (comb[0] != 10 - n)
		write(1, ", ", 2);
}

void	ft_recursive(int *comb, int index, int n)
{
	int	digit;

	if (index == n)
	{
		ft_print(comb, n);
		return ;
	}
	digit = 0;
	if (index > 0)
		digit = comb[index - 1] + 1;
	while (digit <= 9)
	{
		comb[index] = digit;
		ft_recursive(comb, index + 1, n);
		digit++;
	}
}

void	ft_print_combn(int n)
{
	int	comb[10];

	if (n <= 0 || n >= 10)
		return ;
	ft_recursive(comb, 0, n);
}
