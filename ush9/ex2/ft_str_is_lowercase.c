/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 04:38:09 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/12 04:40:59 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 96 && str[i] <= 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main (void){
	char str[] ={"seAdAhAlilI"};
   int r= ft_str_is_lowercase(str);
   printf("%d", r);

}*/