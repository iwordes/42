/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:54:13 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/16 10:54:14 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

void	ft_putaddr_fd(const void *address, int fd)
{
	ft_putstr("0x");
	ft_putuint_base_fd((const unsigned long long*)address);
}
