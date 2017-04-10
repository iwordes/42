/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:43:34 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/02 16:48:23 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Freeing NULL is defined behavior, doing absolutely nothing.
*/

void	ft_memdel(void **pointer)
{
	if (pointer != NULL)
	{
		free(*pointer);
		*pointer = NULL;
	}
}
