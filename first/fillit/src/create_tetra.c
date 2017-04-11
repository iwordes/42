/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_tetra.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:49:54 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/16 15:58:49 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

/*
** Validates that there are only 4 points in the tetra and places those points
** within the actual tetra.
*/

void		create_tetra(const char buffer[4][5], t_tetra *tetra, int t)
{
	int		b;
	int		x;
	int		y;

	b = 0;
	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			FAILIF(buffer[y][x] != '#' && buffer[y][x] != '.');
			if (buffer[y][x] == '#')
			{
				FAILIF(b > 3);
				tetra->block[b].x = x;
				tetra->block[b].y = y;
				b += 1;
			}
			x += 1;
		}
		y += 1;
	}
	tetra->letter = 'A' + t;
}
