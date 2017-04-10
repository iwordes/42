/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_base_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:54:44 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/16 10:54:51 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

static void	ft_putuint_base_fd_body(unsigned long long i, int base, int fd)
{
	if (i / base != 0)
		ft_putuint_base_fd_body(i / base, base, fd);
	ft_putchar_fd(BASE64[ft_absolute(i % base)], fd);
}

void		ft_putuint_base_fd(unsigned long long integer, int base, int fd)
{
	if (base >= 2 && base <= 64)
		ft_putuint_base_fd_body(integer, base, fd);
}
