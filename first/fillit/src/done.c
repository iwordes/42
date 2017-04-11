/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   done.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 19:58:09 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/10 19:58:25 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

void		done(t_map map)
{
	int		y;
	int		x;

	y = 0;
	while (y < map.size)
	{
		x = 0;
		while (x < map.size)
		{
			if (map.grid[y][x] != 0)
				ft_putchar(map.grid[y][x]);
			else
				ft_putchar('.');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
	exit(0);
}
