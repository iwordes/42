/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 10:08:11 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/05 10:08:13 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prints a given integer, in base-10 (decimal), to a given file descriptor.
*/

void	ft_putint_fd(long long integer, int fd)
{
	ft_putint_base_fd(integer, 10, fd);
}
