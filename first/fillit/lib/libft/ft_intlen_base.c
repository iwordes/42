/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 10:04:14 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/05 10:04:17 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the number of places in a given number when converted to X base.
*/

int		ft_intlen_base(long long integer, int base)
{
	int	length;

	if (base > 1)
	{
		length = (integer < 0) ? 2 : 1;
		while ((integer /= base) != 0)
			length++;
		return (length);
	}
	if (base == 1)
		return (integer);
	return (0);
}
