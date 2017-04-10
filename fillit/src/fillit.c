/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 16:08:09 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/10 16:10:50 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

/*
** Recursive backtracking algorithm dealing with the repeated placement of
** a given tetra on every segment of the map.
*/

void		fillit(t_map map, t_tetra *tetra)
{
	int		x;
	int		y;

	if (map.size == 0)
		return ;
	if (tetra->letter == 0)
		done(map);
	y = 0;
	while (y < map.size)
	{
		x = 0;
		while (x < map.size)
		{
			fillit(place(x, y, map, tetra), tetra + 1);
			x += 1;
		}
		y += 1;
	}
}
