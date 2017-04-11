/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_tetra.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 16:01:24 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/16 15:56:50 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

/*
** Labels:
** ##...#....#:
*/

static char		*g_fingerprints[19] =
{
	"##...#....#",
	"###....#",
	"#....#...##",
	"#....###",
	"##....#....#",
	"###..#",
	"#....#....##",
	"#..###",
	"##..##",
	"#...##...#",
	"##....##",
	"#....##....#",
	"##...##",
	"#....#....#....#",
	"####",
	"###...#",
	"#...##....#",
	"#...###",
	"#....##...#"
};

/*
** Validates a given buffer against a list of 19 viable tetra fingerprints.
*/

int				validate_buffer(char *buffer)
{
	char		*replaced;
	char		*trimmed;
	int			diff;
	int			f;

	f = 0;
	buffer[20] = 0;
	while (f < 19)
	{
		replaced = ft_strrep(buffer, "\n", ".");
		trimmed = ft_strctrim(replaced, '.');
		if (trimmed == NULL)
			break ;
		diff = ft_strcmp(trimmed, g_fingerprints[f]);
		free(replaced);
		free(trimmed);
		if (diff == 0)
			return (1);
		f++;
	}
	return (0);
}
