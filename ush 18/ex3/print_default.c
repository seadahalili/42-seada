/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_default.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 20:44:25 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/24 20:44:32 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	print_default(unsigned char *buf, int len, long offset)
{
	int	i;

	printf("%07lx", offset);
	i = 0;
	while (i < len)
	{
		if (i % 2 == 0)
			printf(" ");
		printf("%02x", buf[i]);
		i++;
	}
	printf("\n");
}
