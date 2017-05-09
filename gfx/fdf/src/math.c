/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/06 18:08:05 by iwordes           #+#    #+#             */
/*   Updated: 2017/05/07 16:51:45 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>

/*
** 1. Get local -> world matrix
**   a. mx = MX_ID;
**   b. mx_scale(mx, SCALE, mx)
**   c. mx_rot(mx, ANGLE, mx);
**   d. mx_tran(mx, POS, mx);
** 2. For each coordinate...
**   a. Multiply by mx
**   b. Project
*/

static void	proc(t_mx m, t_gfxpt *pt, int64_t z)
{
	t_vec	d3;

	d3.z = z;
	d3.x = pt.x;
	d3.y = pt.y;
	mx_mulv(&d3, m);
	pt->x = FOCAL * (d3.x / (z ?: 1)) + (RES_X / 2);
	pt->y = FOCAL * (d3.y / (z ?: 1)) + (RES_Y / 2);
}

void		math(t_main *mn)
{
	uint32_t	x;
	uint32_t	y;
	t_mx		m;

	y = 0;
	mx_init(m);
	mx_scale(m, mn->scale);
	mx_rot(m, mn->rx, mn->ry, mn->rz);
	mx_trans(m, mn->tx, mn->ty, mn->tz);
	while (y < mn->y)
	{
		x = 0;
		while (x < mn->x)
		{
			mn->raw[y][x].x = x;
			mn->raw[y][x].y = y;
			proc(m, &mn->raw[y][x], mn->map[y][x]);
			x += 1;
		}
		y += 1;
	}
}
