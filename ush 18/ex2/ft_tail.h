/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 19:48:47 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/24 19:48:53 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <stdlib.h>
# include <string.h>
# include <libgen.h>

# define BUF_SIZE 1024

int		ft_atoi(char *s);
int		ft_strlen(char *s);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr_fd(char *s, int fd);
void	ft_error(char *prog, char *file);

void	ft_memcpy(char *dst, char *src, int n);
int		ft_file_size(int fd);
void	ft_read_all(int fd, char *content, int total);

void	ft_tail_file(char *prog, char *file, int n);

#endif