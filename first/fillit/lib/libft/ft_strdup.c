/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:44:17 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/02 16:44:18 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *original)
{
	int		i;
	char	*copy;

	i = 0;
	copy = ft_strnew(ft_strlen(original));
	if (copy != NULL)
		while (original[i])
		{
			copy[i] = original[i];
			i++;
		}
	return (copy);
}
