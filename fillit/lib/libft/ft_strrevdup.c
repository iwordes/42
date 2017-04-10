/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrevdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:44:58 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/05 10:02:47 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a reversed copy of the given string.
*/

char	*ft_strrevdup(const char *string)
{
	char	*gnirts;

	NULL_GUARD(gnirts = ft_strdup(string));
	ft_strrev(gnirts);
	return (gnirts);
}
