/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 19:49:59 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/24 19:50:07 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_memcpy(char *dst, char *src, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
}

int	ft_file_size(int fd)
{
	int		total;
	int		bytes;
	char	buf[BUF_SIZE];

	total = 0;
	bytes = read(fd, buf, BUF_SIZE);
	while (bytes > 0)
	{
		total += bytes;
		bytes = read(fd, buf, BUF_SIZE);
	}
	return (total);
}

void	ft_read_all(int fd, char *content, int total)
{
	int		got;
	int		bytes;
	char	buf[BUF_SIZE];

	got = 0;
	bytes = read(fd, buf, BUF_SIZE);
	while (bytes > 0 && got < total)
	{
		ft_memcpy(content + got, buf, bytes);
		got += bytes;
		bytes = read(fd, buf, BUF_SIZE);
	}
}
