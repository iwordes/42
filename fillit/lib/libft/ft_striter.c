/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:57:14 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/16 10:57:15 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_striter(char *string, void (*func)(char*))
{
	if (string != NULL && func != NULL)
		while (*string)
		{
			func(string);
			string++;
		}
}
