/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   align_tetra.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:36:46 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/10 16:00:20 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

/*
** Properly aligns any tetra so that it resides in the upper-leftmost corner.
*/

void		align_tetra(t_tetra *tetra)
{
	t_pt		offset;
	int			b;

	offset.x = 0;
	while (tetra->block[0].x - offset.x > 0 && tetra->block[1].x - offset.x > 0
		&& tetra->block[2].x - offset.x > 0 && tetra->block[3].x - offset.x > 0)
		offset.x++;
	offset.y = 0;
	while (tetra->block[0].y - offset.y > 0 && tetra->block[1].y - offset.y > 0
		&& tetra->block[2].y - offset.y > 0 && tetra->block[3].y - offset.y > 0)
		offset.y++;
	b = 0;
	while (b < 4)
	{
		tetra->block[b].x -= offset.x;
		tetra->block[b].y -= offset.y;
		b++;
	}
}
