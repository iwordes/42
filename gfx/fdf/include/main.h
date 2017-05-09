/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/06 17:50:20 by iwordes           #+#    #+#             */
/*   Updated: 2017/05/07 16:36:46 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <fcntl.h>
# include <math.h>
# include <unistd.h>

# include <libgfx.h>

# define FOCAL 80
# define RES_X 800
# define RES_Y 600

/*
** ========================================================================== **
*/

typedef struct	s_main
{
	int64_t		**map;
	t_gfxpt		**raw;
	uint32_t	x;
	uint32_t	y;

	int32_t		rx;
	int32_t		ry;
	int32_t		rz;
	int32_t		scale;
	int32_t		tx;
	int32_t		ty;
	int32_t		tz;

	t_gfx		gfx;
}				t_main;

typedef struct	s_vec
{
	int64_t		x;
	int64_t		y;
	int64_t		z;
}				t_vec;

typedef float	t_mx[4][4];

/*
** ========================================================================== **
*/

void			mx_cpy(t_mx dest, t_mx src);
void			mx_mul(t_mx lhs, t_mx rhs, t_mx out);
void			mx_rot(t_mx mx, int32_t rx, int32_t ry, int32_t rz);
void			mx_init(t_mx mx);
void			mx_mulv(t_vec lhs, t_mx rhs);
void			mx_scale(t_mx mx, int32_t scale);
void			mx_trans(t_mx mx, int32_t tx, int32_t ty, int32_t tz);

/*
** ========================================================================== **
*/

void			init(t_main *mn, char *file);
void			math(t_main *mn);
void			draw(t_main *mn);
int				hook(int key, t_main *mn);

#endif
