/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 08:25:44 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/22 10:39:16 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

static int	is_valid_number(char *s)
{
	int	i;

	if (!s || !s[0])
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

static int	init_args(int argc, char **argv, char **dict_file, char **number)
{
	*dict_file = "numbers.dict";
	if (argc == 2)
		*number = argv[1];
	else
	{
		*dict_file = argv[1];
		*number = argv[2];
	}
	return (is_valid_number(*number));
}

int	main(int argc, char **argv)
{
	t_dict	*dict;
	int		size;
	char	*dict_file;
	char	*number;

	if (argc != 2 && argc != 3)
		return (ft_putstr("Error\n"), 1);
	if (!init_args(argc, argv, &dict_file, &number))
		return (ft_putstr("Error\n"), 1);
	size = parse_dict(dict_file, &dict);
	if (size <= 0 || !dict)
		return (ft_putstr("Dict Error\n"), 1);
	number_to_words(number, dict, size);
	free_dict(dict, size);
	return (0);
}
