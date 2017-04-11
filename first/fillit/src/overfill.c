/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   overfill.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 16:10:52 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/10 16:15:02 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

/*
** Every time fillit() fails to find a working solution with the given map size,
** overfill() artificially grows the map. The map never changes in its actual
** size; only the artificial limits imposed on it are increased.
*/

void		overfill(t_tetra *tetras)
{
	t_map	map;

	ft_bzero(&map, sizeof(t_map));
	map.size = 2;
	while (map.size <= MAPSIZE)
	{
		fillit(map, tetras);
		map.size++;
	}
}
