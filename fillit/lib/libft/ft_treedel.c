/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treedel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 19:40:51 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/14 19:40:54 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tree.h"

/*
** Deletes all nodes in a given tree.
*/

void	ft_treedel(t_tree *tree)
{
	if (tree->left != NULL)
	{
		ft_treedel(tree->left);
		free(tree->left);
	}
	if (tree->right != NULL)
	{
		ft_treedel(tree->right);
		free(tree->right);
	}
}
