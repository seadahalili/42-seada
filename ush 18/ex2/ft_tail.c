/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 10:21:13 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/24 19:50:35 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_tail_file(char *prog, char *file, int n)
{
	int		fd;
	int		total;
	char	*content;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (ft_error(prog, file));
	total = ft_file_size(fd);
	close(fd);
	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (ft_error(prog, file));
	content = malloc(total + 1);
	if (!content)
		return ((void)close(fd));
	ft_read_all(fd, content, total);
	if (n > total)
		n = total;
	write(1, content + total - n, n);
	free(content);
	close(fd);
}

int	main(int argc, char **argv)
{
	int	n;

	if (argc != 4 || ft_strcmp(argv[1], "-c") != 0)
		return (1);
	n = ft_atoi(argv[2]);
	ft_tail_file(argv[0], argv[3], n);
	return (0);
}
