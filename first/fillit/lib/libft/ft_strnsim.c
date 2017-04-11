/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnsim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:44:50 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/05 09:56:03 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the number of similar characters between string1 and string2 that are
** under index _n_.
*/

size_t		ft_strnsim(const char *string1, const char *string2, size_t n)
{
	size_t	similar;

	similar = 0;
	if (string1 != NULL && string2 != NULL)
		while (similar < n && string1[similar] == string2[similar])
			similar++;
	return (similarities);
}
