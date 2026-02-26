/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_and_dump.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 20:51:13 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/24 20:51:20 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int	open_and_dump(char *path, char *prog, int canonical)
{
	int	fd;
	int	ret;

	fd = open(path, O_RDONLY);
	if (fd < 0)
	{
		write(2, prog, strlen(prog));
		write(2, ": ", 2);
		write(2, path, strlen(path));
		write(2, ": ", 2);
		write(2, strerror(errno), strlen(strerror(errno)));
		write(2, "\n", 1);
		return (1);
	}
	ret = hexdump_fd(fd, canonical);
	close(fd);
	return (ret);
}
