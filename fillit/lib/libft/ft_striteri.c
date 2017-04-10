/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:44:23 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/02 16:49:47 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_striteri(char *string, void (*func)(unsigned int, char*))
{
	int		i;

	i = 0;
	if (string != NULL && func != NULL)
		while (string[i])
		{
			func(i, string + i);
			i++;
		}
}
