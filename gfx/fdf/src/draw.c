/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/06 18:25:56 by iwordes           #+#    #+#             */
/*   Updated: 2017/05/07 17:39:07 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>

void	draw(t_main *mn)
{
	t_gfxln		ln;
	uint32_t	x;
	uint32_t	y;

	y = 0;
	gfx_fill(&mn->gfx, 0);
	while (y < mn->y)
	{
		x = 0;
		while (x < mn->x)
		{
			ln.pt[0] = mn->raw[y][x];
			if (x + 1 < mn->x)
			{
				ln.pt[1] = mn->raw[y][x + 1];
				gfx_ln(&mn->gfx, &ln);
			}
			if (y + 1 < mn->y)
			{
				ln.pt[1] = mn->raw[y + 1][x];
				gfx_ln(&mn->gfx, &ln);
			}
			x += 1;
		}
		y += 1;
	}
	gfx_draw(&mn->gfx);
}
