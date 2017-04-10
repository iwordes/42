/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:44:56 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/05 09:55:38 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Reverses a string in-place.
** - Stops immediately if passed NULL or an empty string.
** - Stops when the pointers for start and end overlap. (no garbling)
** - Triple XOR (bitwise eXclusive OR) swaps two variables without a third.
*/

void	ft_strrev(char *start)
{
	char	temp;
	char	*end;

	if (start != NULL && *start != 0)
	{
		end = start + ft_strlen(start) - 1;
		while (start < end)
		{
			temp = *start;
			*start = *end;
			*end = temp;
			start++;
			end--;
		}
	}
}
