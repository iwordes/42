/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/06 17:48:02 by iwordes           #+#    #+#             */
/*   Updated: 2017/05/07 17:04:29 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>

static void		check(t_main *mn, char *file)
{
	int			fd;

	if ((fd = open(file, O_RDONLY)) == -1)
		exit(1);
	y = 0;
	while (ft_getln(0, &ln) > 0)
	{
		x = 0;
		while (ln[i] != 0)
		{
			if (ln[i] == '-' || ln[i] == '+')
				i += 1;
			ITER(i, ft_isdigit(ln[i]));
			ITER(i, ft_isspace(ln[i]));
			mn->x += (y == 0);
			x += 1;
		}
		if (y != 0 && x != mn->x)
			exit(2);
		mn->y += 1;
		free(ln);
		y += 1;
	}
	free(ln);
	close(fd);
}

static void		load(t_main *mn, char *file)
{
	int		fd;
	long	n;

	if ((fd = open(file, O_RDONLY)) == -1)
		exit(1);
	y = 0;
	while (ft_getln(0, &ln) > 0)
	{
		x = 0;
		while (ln[i] != 0)
		{
			mn->map[y][x] = ft_atoi(ln + i);
			if (ln[i] == '-' || ln[i] == '+')
				i += 1;
			ITER(i, ft_isdigit(ln[i]));
			ITER(i, ft_isspace(ln[i]));
			mn->x += (y == 0);
			x += 1;
		}
		if (y != 0 && x != mn->x)
			exit(2);
		mn->y += 1;
		free(ln);
		y += 1;
	}
	free(ln);
}

static void		malt(t_main *mn)
{
	uint32_t	y;

	y = 0;
	MGUARD(mn->map = MALT(int64_t*, mn->y));
	MGUARD(mn->raw = MALT(t_gfxpt*, mn->y));
	while (y < mn->y)
	{
		MGUARD(mn->map[y] = MALT(int64_t, mn->x));
		MGUARD(mn->raw[y] = MALT(t_gfxpt, mn->x));
	}
}

void			init(t_main *mn, char *file)
{
	check(mn, file);
	malt(mn);
	load(mn, file);
	GFX(mn->gfx, 800, 600, GFXF_NONE, GFXM_WIRE);
	if (!gfx_init(&mn->gfx))
		exit(3);
	mlx_key_hook(mn->gfx.win, hook, mn);
	mn->rx = 0;
	mn->ry = 0;
	mn->rz = 0;
	mn->scale = 1;
	mn->tx = 0;
	mn->ty = 0;
	mn->tz = 0;
}
