/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 10:02:04 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/05 10:02:07 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prints a given integer in a given base to stdout.
*/

void	ft_putint_base(long long integer, int base)
{
	ft_putint_base_fd(integer, base, 1);
}
