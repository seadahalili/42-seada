/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_to_words.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 08:25:16 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/22 11:14:56 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

static char	*find_value(char *key, t_dict *dict, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (ft_strcmp(dict[i].key, key) == 0)
			return (dict[i].value);
		i++;
	}
	return (NULL);
}

void	number_to_words(char *number, t_dict *dict, int size)
{
	char	*value;

	value = find_value(number, dict, size);
	if (!value)
	{
		ft_putstr("Dict Error\n");
		return ;
	}
	ft_putstr(value);
	ft_putstr("\n");
}
