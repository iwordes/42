/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 16:15:04 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/10 16:23:39 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

/*
** Attempts placement of the given tetra within the given map.
*/

t_map		place(int x, int y, t_map map, t_tetra *tetra)
{
	int		b;
	int		real_x;
	int		real_y;

	b = 0;
	while (b < 4)
	{
		real_x = x + tetra->block[b].x;
		real_y = y + tetra->block[b].y;
		if (map.grid[real_y][real_x] == 0
		&& real_x < map.size && real_y < map.size)
			map.grid[real_y][real_x] = tetra->letter;
		else
		{
			map.size = 0;
			break ;
		}
		b++;
	}
	return (map);
}
