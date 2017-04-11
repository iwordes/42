/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treefind.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:53:13 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/16 10:53:15 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tree.h"

/*
** Find some data in a tree.
*/

t_tree		*ft_treefind(t_tree *tree, void *data, int (*cmp)(void*, void*))
{
	int		outcome;

	if (tree != NULL)
	{
		while ((outcome = cmp(tree->data, data)) != 0)
		{
			if (outcome < 0 && tree->left != NULL)
				tree = tree->left;
			else if (outcome > 0 && tree->right != NULL)
				tree = tree->right;
			else
				return (NULL);
		}
		return (tree);
	}
	return (NULL);
}
