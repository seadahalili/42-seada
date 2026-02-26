/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 10:22:25 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/22 11:15:28 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*read_file(char *filename)
{
	int		fd;
	char	*buffer;
	int		bytes;

	fd = open(filename, O_RDONLY);
	buffer = malloc(10000);
	if (fd < 0 || !buffer)
		return (NULL);
	bytes = read(fd, buffer, 9999);
	if (bytes <= 0)
	{
		close(fd);
		free(buffer);
		return (NULL);
	}
	buffer[bytes] = '\0';
	close(fd);
	return (buffer);
}

int	count_lines(char *s)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			c++;
		i++;
	}
	return (c + 1);
}

int	skip_spaces(char *s, int i)
{
	while (s[i] == ' ')
		i++;
	return (i);
}

char	*dup_range(char *s, int a, int b)
{
	char	*res;
	int		i;

	res = malloc(b - a + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (a < b)
		res[i++] = s[a++];
	res[i] = '\0';
	return (res);
}

int	set_pair(t_dict *d, char *s, int *i)
{
	int	a;
	int	b;

	a = *i;
	while (s[*i] && s[*i] != ':' && s[*i] != '\n')
		(*i)++;
	if (s[*i] != ':')
		return (0);
	b = (*i)++;
	d->key = dup_range(s, a, b);
	if (!d->key)
		return (0);
	*i = skip_spaces(s, *i);
	a = *i;
	while (s[*i] && s[*i] != '\n')
		(*i)++;
	d->value = dup_range(s, a, *i);
	if (!d->value)
		return (free(d->key), 0);
	if (s[*i] == '\n')
		(*i)++;
	return (1);
}
