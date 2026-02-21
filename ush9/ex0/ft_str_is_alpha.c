/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 04:37:12 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/12 04:40:14 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97
					&& str[i] <= 122)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main (void){
	char str[] ={"seAdA55a"};
   int r= ft_str_is_alpha(str);
   printf("%d", r);

}*/
