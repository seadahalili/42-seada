/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 10:08:40 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/24 10:08:55 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <fcntl.h>
#include <libgen.h>
#include <string.h>
#include <unistd.h>

#define BUF_SIZE 1024

static int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

static void	ft_print_error(char *prog, char *file)
{
	ft_putstr_fd(basename(prog), 2);
	ft_putstr_fd(": ", 2);
	ft_putstr_fd(file, 2);
	ft_putstr_fd(": ", 2);
	ft_putstr_fd((char *)strerror(errno), 2);
	ft_putstr_fd("\n", 2);
}

static void	ft_cat_fd(int fd)
{
	char	buf[BUF_SIZE];
	int		bytes;

	bytes = read(fd, buf, BUF_SIZE);
	while (bytes > 0)
	{
		write(1, buf, bytes);
		bytes = read(fd, buf, BUF_SIZE);
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	fd;

	if (argc == 1)
	{
		ft_cat_fd(0);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd < 0)
			ft_print_error(argv[0], argv[i]);
		else
		{
			ft_cat_fd(fd);
			close(fd);
		}
		i++;
	}
	return (0);
}
