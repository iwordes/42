/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 09:54:30 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/05 09:54:39 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_intlen(long long integer)
{
	int		length;

	length = (integer < 0) ? 2 : 1;
	while ((integer /= 10) != 0)
		length++;
	return (length);
}
