/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:42:28 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/02 16:42:30 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ispunct(int c)
{
	if ((c >= '!' && c <= '/') || (c >= ':' && c <= '@'))
		return (1);
	else if ((c >= '[' && c <= '`') || (c >= '{' && c <= '~'))
		return (1);
	else
		return (0);
}