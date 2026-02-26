/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 08:24:41 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/22 11:15:38 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	parse_dict(char *filename, t_dict **dict)
{
	char	*content;
	int		lines;
	int		size;

	*dict = NULL;
	content = read_file(filename);
	if (!content)
		return (0);
	lines = count_lines(content);
	*dict = malloc(sizeof(t_dict) * (lines + 1));
	if (!*dict)
	{
		free(content);
		return (0);
	}
	size = fill_dict(*dict, content);
	free(content);
	if (size <= 0)
		return (free(*dict), *dict = NULL, 0);
	(*dict)[size].key = NULL;
	(*dict)[size].value = NULL;
	return (size);
}

void	free_dict(t_dict *dict, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(dict[i].key);
		free(dict[i].value);
		i++;
	}
	free(dict);
}
