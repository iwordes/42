/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:44:27 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/02 16:44:29 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *prefix, const char *suffix)
{
	char	*string;

	if (prefix != NULL && suffix != NULL)
	{
		string = ft_strnew(ft_strlen(prefix) + ft_strlen(suffix));
		if (string != NULL)
		{
			ft_strcat(string, prefix);
			ft_strcat(string, suffix);
		}
		return (string);
	}
	return (NULL);
}
