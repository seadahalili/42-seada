/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexdump_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 21:04:44 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/24 21:04:51 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	print_read_error(void)
{
	write(2, strerror(errno), strlen(strerror(errno)));
	write(2, "\n", 1);
}

void	print_offset(long offset, int canonical)
{
	if (canonical)
		printf("%08lx\n", offset);
	else
		printf("%07lx\n", offset);
}
