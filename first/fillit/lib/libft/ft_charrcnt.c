/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrrcnt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:42:11 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/05 09:56:08 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Counts the number of runs of characters (instead of individual characters) in
** the given string.
*/

size_t		ft_charrcnt(const char *string, char find)
{
	size_t	runs;

	runs = 0;
	if (string != NULL)
		while (*string != 0)
		{
			if (*string == find)
			{
				while (*string == find)
					string++;
				runs++;
			}
			else
				string++;
		}
	return (runs);
}
