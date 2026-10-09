/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_iterative_power.c                                :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/06 13:25:30 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/06 13:25:32 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	t;
	int	i;

	i = 0;
	t = nb;
	if (power == 1)
		return (t);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power - 1)
	{
		t = nb * t;
		i++;
	}
	return (t);
}

/* #include <stdio.h>

int	main(void)
{
	int	x = 2;
	int power = -2;

	x = ft_iterative_power(x, power);
	printf("%d", x);
	return (0);
} */