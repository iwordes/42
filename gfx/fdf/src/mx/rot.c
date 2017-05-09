/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/07 15:44:22 by iwordes           #+#    #+#             */
/*   Updated: 2017/05/07 15:56:51 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>

static void	mx_rotx(t_mx mx, int32_t rx)
{
	t_mx	tmp;
	t_mx	rot;

	mx_init(rot);
	rot[1][1] = cos(rx);
	rot[1][2] = sin(rx);
	rot[2][1] = -sin(rx);
	rot[2][2] = cos(rx);
	mx_mul(mx, rot, tmp);
	mx_cpy(mx, tmp);
}

static void	mx_roty(t_mx mx, int32_t ry)
{
	t_mx	tmp;
	t_mx	rot;

	mx_init(rot);
	rot[0][0] = cos(ry);
	rot[0][2] = -sin(ry);
	rot[2][0] = sin(ry);
	rot[2][2] = cos(ry);
	mx_mul(mx, rot, tmp);
	mx_cpy(mx, tmp);
}

static void	mx_rotz(t_mx mx, int32_t rz)
{
	t_mx	tmp;
	t_mx	rot;

	mx_init(rot);
	rot[0][0] = cos(rz);
	rot[0][1] = sin(rz);
	rot[1][0] = -sin(rz);
	rot[1][1] = cos(rz);
	mx_mul(mx, rot, tmp);
	mx_cpy(mx, tmp);
}

void		mx_rot(t_mx mx, int32_t rx, int32_t ry, int32_t rz)
{
	mx_rotx(mx, rx);
	mx_roty(mx, ry);
	mx_rotz(mx, rz);
}
