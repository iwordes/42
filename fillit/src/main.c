/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:37:16 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/10 16:26:02 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

int			main(int argc, char **argv)
{
	int		input;

	if (argc == 2)
	{
		input = open(argv[1], O_RDONLY);
		FAILIF(input < 0);
		overfill(init_tetras(input));
		close(input);
	}
	else
	{
		ft_putstr("Usage: ");
		ft_putstr(argv[0]);
		ft_putstr(" <filename>\n");
	}
	return (0);
}
