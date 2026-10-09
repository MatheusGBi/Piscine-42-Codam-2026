/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_print_program_name.c                             :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/08 10:56:16 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/08 10:56:19 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	(void)argc;
	i = 0;
	while (argv[0][i])
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
