/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 09:53:56 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/24 10:05:44 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

void	ft_putstr_err(char *str)
{
	while (*str)
		write(2, str++, 1);
}

int	main(int argc, char **argv)
{
	int		fd;
	int		bytes;
	char	buffer[BUF_SIZE];

	if (argc == 1)
		return (ft_putstr_err("File name missing.\n"), 1);
	if (argc > 2)
		return (ft_putstr_err("Too many arguments.\n"), 1);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (ft_putstr_err("Cannot read file.\n"), 1);
	bytes = read(fd, buffer, BUF_SIZE);
	while (bytes > 0)
	{
		write(1, buffer, bytes);
		bytes = read(fd, buffer, BUF_SIZE);
	}
	close(fd);
	return (0);
}
