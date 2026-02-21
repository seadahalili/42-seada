/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 09:56:13 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/08 18:24:33 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	if (nb < 0)
		return (0);
	fact = 1;
	while (nb > 1)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}

//  int	main(void)
// {
// 	int	result;

// 	result = ft_iterative_factorial(5);
// 	printf("%d\n",result);
// 	return (0);
// }
