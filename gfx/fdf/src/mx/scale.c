/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scale.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/07 16:40:56 by iwordes           #+#    #+#             */
/*   Updated: 2017/05/07 16:41:18 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>

void	mx_scale(t_mx mx, int scale)
{
	t_mx	tmp;
	t_mx	tr;

	mx_init(tr);
	tr[0][0] = scale;
	tr[1][1] = scale;
	tr[2][2] = scale;
	mx_mul(mx, tr, tmp);
	mx_cpy(mx, tmp);
}
