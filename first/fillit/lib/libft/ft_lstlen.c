/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:43:05 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/05 09:52:58 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Given a t_list* list, returns the length of that list.
** - If passed NULL, returns 0.
** - If passed an invalid pointer to a list, undefined behavior may occur!
*/

size_t		ft_lstlen(const t_list *list)
{
	size_t	l;

	l = 0;
	while (list != NULL)
	{
		list = list->next;
		l++;
	}
	return (l);
}
