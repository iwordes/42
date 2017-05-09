/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trans.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/07 16:00:58 by iwordes           #+#    #+#             */
/*   Updated: 2017/05/07 16:06:01 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>

void	mx_trans(t_mx mx, int tx, int ty, int tz)
{
	t_mx	tmp;
	t_mx	tr;

	mx_init(tr);
	tr[3][0] = tx;
	tr[3][1] = ty;
	tr[3][2] = tz;
	mx_mul(mx, tr, tmp);
	mx_cpy(mx, tmp);
}
