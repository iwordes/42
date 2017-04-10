/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 09:48:50 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/05 09:59:56 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prints a given integer, in base-10 (decimal), to stdout.
*/

void	ft_putint(long long integer)
{
	ft_putint_base_fd(integer, 10, 1);
}
