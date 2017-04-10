/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:38:49 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/16 16:38:50 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NUMBER_H
# define FT_NUMBER_H

long long	ft_absolute(long long integer);

long long	ft_greater(long long input1, long long input2);
long long	ft_lesser(long long input1, long long input2);

int			ft_intlen(long long integer);
int			ft_intlen_base(long long integer, int base);

long long	ft_square(long long integer);
long long	ft_power(long long integer, unsigned int exponent);

#endif
