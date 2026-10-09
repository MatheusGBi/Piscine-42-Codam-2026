/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_sort_params.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/08 10:57:00 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/08 10:57:02 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	asccheck(char *c1, char *c2)
{
	int	i;

	i = 0;
	while (c1[i] || c2[i])
	{
		if (c1[i] > c2[i] || c2[i] > c1[i])
			return (c1[i] - c2[i]);
		i++;
	}
	return (0);
}

void	wrtpmtrs(int a, char **b)
{
	int	i;
	int	j;

	i = 0;
	j = a - 1;
	while (j > 0)
	{
		while (b[j][i])
		{
			write(1, &b[j][i], 1);
			i++;
		}
		i = 0;
		write(1, "\n", 1);
		j--;
	}
	return ;
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*c;

	j = 1;
	while (argv[j])
	{
		i = 1 + j;
		while (i < argc)
		{
			if (asccheck(argv[j], argv[i]) < 0)
			{
				c = argv[j];
				argv[j] = argv[i];
				argv[i] = c;
			}
			i++;
		}
		j++;
	}
	wrtpmtrs(argc, argv);
	return (0);
}
