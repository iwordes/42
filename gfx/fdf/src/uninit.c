/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uninit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/07 17:01:43 by iwordes           #+#    #+#             */
/*   Updated: 2017/05/07 17:28:27 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>

void	uninit(t_main *mn)
{
	uint32_t	y;

	y = 0;
	gfx_uninit(&mn->gfx);
	while (y < mn->y)
	{
		free(mn->map[y]);
		free(mn->raw[y]);
	}
	free(mn->map);
	free(mn->raw);
	exit(0);
}
