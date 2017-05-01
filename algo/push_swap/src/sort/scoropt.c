/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scoropt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 20:54:12 by iwordes           #+#    #+#             */
/*   Updated: 2017/04/29 20:59:46 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

UINT	scoropt(int ra, int rb, t_stack *a, t_stack *b)
{
	ropt(&ra, &rb, a, b);
	return (score(ra, rb));
}
