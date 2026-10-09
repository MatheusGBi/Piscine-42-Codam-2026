/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_print_params.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/08 10:56:29 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/08 10:56:31 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	(void)argc;
	while (argv[j])
	{
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		i = 0;
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
