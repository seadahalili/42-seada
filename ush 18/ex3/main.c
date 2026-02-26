/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 20:42:52 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/24 20:43:05 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int	main(int argc, char **argv)
{
	int	canonical;
	int	i;
	int	ret;

	canonical = 0;
	ret = 0;
	i = 1;
	if (i < argc && strcmp(argv[i], "-C") == 0)
	{
		canonical = 1;
		i++;
	}
	if (i >= argc)
		return (hexdump_fd(STDIN_FILENO, canonical));
	while (i < argc)
	{
		if (open_and_dump(argv[i], basename(argv[0]), canonical) != 0)
			ret = 1;
		i++;
	}
	return (ret);
}
