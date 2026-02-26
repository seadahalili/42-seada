/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexdump_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 20:45:25 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/24 21:04:09 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int	hexdump_fd(int fd, int canonical)
{
	unsigned char	buf[BUF];
	ssize_t			n;
	long			offset;

	offset = 0;
	n = read(fd, buf, BUF);
	while (n > 0)
	{
		if (canonical)
			print_canonical(buf, (int)n, offset);
		else
			print_default(buf, (int)n, offset);
		offset += n;
		n = read(fd, buf, BUF);
	}
	if (n < 0)
	{
		print_read_error();
		return (1);
	}
	print_offset(offset, canonical);
	return (0);
}
