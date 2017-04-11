/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_tetras.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:43:12 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/16 15:53:59 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

t_tetra				*init_tetras(int fd)
{
	static t_tetra	tetras[27];
	char			buffer[21];
	int				bytes;
	int				last;
	int				t;

	t = 0;
	last = FALSE;
	while ((bytes = read(fd, buffer, 21)) > 0)
	{
		FAILIF(last == TRUE || bytes < 20 || (bytes == 21 && buffer[20] != '\n')
			|| buffer[4] != '\n' || buffer[9] != '\n'
			|| buffer[14] != '\n' || buffer[19] != '\n'
			|| !validate_buffer(buffer));
		create_tetra((char (*)[5])buffer, tetras + t, t);
		align_tetra(tetras + t);
		if (bytes == 20)
			last = TRUE;
		t++;
	}
	FAILIF(t == 0 || bytes < 0 || last == FALSE);
	tetras[t].letter = 0;
	return (tetras);
}
