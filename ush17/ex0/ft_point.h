/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 11:44:58 by sehalili          #+#    #+#             */
/*   Updated: 2026/02/22 12:49:26 by sehalili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H
# include <unistd.h>

typedef struct s_point
{
	int	x;
	int	y;

}		t_point;
void	set_point(t_point *point);
#endif 