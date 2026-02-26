/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict_fill.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 10:23:10 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/22 11:15:18 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	fill_dict(t_dict *dict, char *content)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (content[j])
	{
		j = skip_spaces(content, j);
		if (!content[j])
			break ;
		if (!set_pair(&dict[i], content, &j))
			return (0);
		i++;
	}
	return (i);
}
