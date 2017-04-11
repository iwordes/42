/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 16:26:53 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/10 16:33:40 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

# include <libft.h>

# define FAILIF(COND) if (COND) fail();
# define MAPSIZE 20

typedef struct	s_map
{
	char		grid[MAPSIZE][MAPSIZE];
	char		size;
}				t_map;

typedef struct	s_pt
{
	char		x;
	char		y;
}				t_pt;

typedef struct	s_tetra
{
	t_pt		block[4];
	char		letter;
}				t_tetra;

t_tetra			*init_tetras(int fd);
int				validate_buffer(char *buffer);
void			create_tetra(const char buffer[4][5], t_tetra *tetra, int t);
void			align_tetra(t_tetra *tetra);

void			overfill(t_tetra *tetras);
void			fillit(t_map map, t_tetra *tetra);
t_map			place(int x, int y, t_map map, t_tetra *tetra);

void			done(t_map solved);
void			fail(void);

#endif
