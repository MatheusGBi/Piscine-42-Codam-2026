/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_boolean.h                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/11 13:08:10 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/11 13:08:12 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

typedef int	t_bool;

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments\n"
# define SUCCESS 0
# define TRUE 1
# define FALSE 0
# define EVEN(x) x % 2 == 0

#endif
