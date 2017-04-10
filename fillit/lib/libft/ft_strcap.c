/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:53:56 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/16 10:53:57 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Capitalizes each word in a string. A word is defined as any consecutive run
** of characters a-z or A-Z.
*/

void		ft_strcap(char *string)
{
	if (string != NULL)
		while (*string != 0)
		{
			if (ft_islower(*string))
				*string -= 32;
			while (ft_isalpha(*string))
				string++;
			while (*string != 0 && !ft_isalpha(*string))
				string++;
		}
}
