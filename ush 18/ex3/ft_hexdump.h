/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 20:42:24 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/24 21:08:07 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEXDUMP_H
# define FT_HEXDUMP_H

# include <errno.h>
# include <fcntl.h>
# include <libgen.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

# define BUF 16

void	print_canonical(unsigned char *buf, int len, long offset);
void	print_default(unsigned char *buf, int len, long offset);
void	print_read_error(void);
void	print_offset(long offset, int canonical);
int		hexdump_fd(int fd, int canonical);
int		open_and_dump(char *path, char *prog, int canonical);

#endif
