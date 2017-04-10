/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_macros.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:38:46 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/16 16:40:56 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MACROS_H
# define FT_MACROS_H

# define BASE10 "0123456789"
# define BASE16 BASE10 "ABCDEF"
# define BASE36 BASE16 "GHIJKLMNOPQRSTUVWXYZ"
# define BASE62 BASE36 "abcdefghijklmnopqrstuvwxyz"
# define BASE64 BASE62 "+/"

# ifndef TRUE
#  define TRUE 1
# endif

# ifndef FALSE
#  define FALSE 0
# endif

# ifndef NULL
#  define NULL (void*)0
# endif

# define NULL_GUARD(INPUT) if ((INPUT) == NULL) return (NULL)

#endif
