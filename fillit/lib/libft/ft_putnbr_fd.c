/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:43:53 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/05 09:54:28 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** In favor of the more accurate ft_putint_fd, this function will not be used.
*/

void	ft_putnbr_fd(int integer, int fd)
{
	ft_putint_fd(integer, fd);
}
