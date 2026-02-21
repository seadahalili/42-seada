/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 07:21:58 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/15 09:50:56 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*squared_tab;

	squared_tab = (int *)malloc(sizeof(int) * length);
	if (squared_tab == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		squared_tab[i] = (*f)(tab[i]);
		i++;
	}
	return (squared_tab);
}
