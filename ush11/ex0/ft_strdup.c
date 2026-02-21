/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 00:36:17 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/17 02:57:14 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// #include <unistd.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*dup;

	if (!src)
		return (NULL);
	length = 0;
	while (src[length])
		length++;
	dup = malloc(length + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// int main()
// {
// 	char	*original;
// 	char	*copy;

// 	original = "Hello World";
// 	copy = ft_strdup(original);

// 	if(!copy)
// 	{
// 		return(1);
// 	}

// 	write(1, copy, 11);
// 	write(1, "\n", 1);
// 	return (0);
// }
