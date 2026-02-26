/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_canonical.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 20:43:43 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/24 20:43:52 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

static void	print_hex(unsigned char *buf, int len)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i == 8)
			printf(" ");
		if (i < len)
			printf("%02x ", buf[i]);
		else
			printf("   ");
		i++;
	}
}

static void	print_ascii(unsigned char *buf, int len)
{
	int	i;

	printf("|");
	i = 0;
	while (i < len)
	{
		if (buf[i] >= 32 && buf[i] < 127)
			printf("%c", buf[i]);
		else
			printf(".");
		i++;
	}
	printf("|\n");
}

void	print_canonical(unsigned char *buf, int len, long offset)
{
	printf("%08lx  ", offset);
	print_hex(buf, len);
	print_ascii(buf, len);
}
