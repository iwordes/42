/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:43:03 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/05 09:53:47 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Given a t_list* list and a void function* func(), applies func() to each
** element of the list.
** - If func() modifies list->next, undefined behavior may occur!
*/

void	ft_lstiter(t_list *list, void (*func)(t_list*))
{
	if (func != NULL)
		while (list != NULL)
		{
			func(list);
			list = list->next;
		}
}
