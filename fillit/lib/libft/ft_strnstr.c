/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:57:46 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/16 10:57:48 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	h_index;
	size_t	h_subindex;
	size_t	n_index;

	h_index = 0;
	n_index = 0;
	if (ft_strlen(needle) == 0)
		return ((char*)haystack);
	while (haystack[h_index] != 0 && h_index < n)
	{
		h_subindex = h_index;
		while (h_subindex < n && haystack[h_subindex] == needle[n_index])
		{
			if (needle[n_index + 1] == 0)
				return ((char*)haystack + h_subindex - n_index);
			h_subindex++;
			n_index++;
		}
		n_index = 0;
		h_index++;
	}
	return ((char*)NULL);
}
