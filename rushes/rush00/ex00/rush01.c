/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalili <shalili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 18:23:56 by shalili           #+#    #+#             */
/*   Updated: 2026/02/08 19:18:29 by shalili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int columns, char first, char between, char last)
{
	int	i;

	i = 1;
	while (i <= columns)
	{
		if (i == 1)
			ft_putchar(first);
		else if (i == columns)
			ft_putchar(last);
		else
			ft_putchar(between);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
	{
		write(1, "Try Positive Values\n", 20);
		return ;
	}
	i = 1;
	while (i <= y)
	{
		if (i == 1)
			ft_print(x, '/', '*', '\\');
		else if (i == y)
			ft_print(x, '\\', '*', '/');
		else
			ft_print(x, '*', ' ', '*');
		i++;
	}
}
