/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 04:39:05 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/12 04:39:08 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (k && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!k && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			k = 0;
		}
		else
		{
			k = 1;
		}
		i++;
	}
	return (str);
}
