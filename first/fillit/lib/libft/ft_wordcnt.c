/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcnt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 10:02:08 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/05 10:02:10 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Counts the number of words (text split by whitespace) in the given string.
*/

size_t		ft_wordcnt(const char *string)
{
	size_t	words;

	words = 0;
	if (string != NULL)
		while (*string != 0)
		{
			while (ft_isspace(*string))
				string++;
			if (*string != 0)
				words++;
			while (!ft_isspace(*string) && *string != 0)
				string++;
		}
	return (words);
}
