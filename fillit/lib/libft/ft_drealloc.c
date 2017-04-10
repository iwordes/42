/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_drealloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:54:09 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/17 10:42:22 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Similar to realloc, but frees the input pointer if allocation fails.
*/

void	*ft_drealloc(void *original, size_t target_size, size_t original_size)
{
	void	*copy;

	copy = ft_realloc(original, target_size, original_size);
	if (copy == NULL)
		free(original);
	return (copy);
}
