/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/06 18:20:01 by iwordes           #+#    #+#             */
/*   Updated: 2017/05/08 13:06:02 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>

#define KEY ("")[k] // TODO: Keycode/character map

/*
** if (KEY == '8' || KEY == '6' || KEY == '2' || KEY == '4')
** 	// Pan
** if (KEY == '7' || KEY == '9')
** 	// Rot Z
** if (KEY == '5')
** 	// Zoom
*/

static void	keys(t_main *mn, int k)
{
	if (KEY == /* esc */)
		uninit(mn);
}

int			hook(int k, t_main *mn)
{
	keys(mn, k);
	math(mn);
	draw(mn);
}
