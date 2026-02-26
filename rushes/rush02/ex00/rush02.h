/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 08:23:34 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/22 10:24:25 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_dict
{
	char	*key;
	char	*value;
}			t_dict;

int			parse_dict(char *filename, t_dict **dict);
void		free_dict(t_dict *dict, int size);
void		number_to_words(char *number, t_dict *dict, int size);

int			ft_strlen(char *str);
int			ft_strcmp(char *s1, char *s2);
void		ft_putstr(char *str);
char		*ft_strdup(char *src);
char		*read_file(char *filename);
int			count_lines(char *s);
int			skip_spaces(char *s, int i);
char		*dup_range(char *s, int a, int b);
int			set_pair(t_dict *d, char *s, int *i);
int			fill_dict(t_dict *dict, char *content);

#endif
