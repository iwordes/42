/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:54:37 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/17 10:37:11 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Switches the value of two integers.
*/

void		ft_swap(int *a, int *b)
{
	int		c;

	if (a != NULL && b != NULL)
	{
		c = *a;
		*a = *b;
		*b = c;
	}
}
