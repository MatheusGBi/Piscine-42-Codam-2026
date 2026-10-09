/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_recursive_power.c                                :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/06 16:15:35 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/06 16:15:36 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	t;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	t = nb;
	if (power > 1)
	{
		t = nb * ft_recursive_power(nb, (power - 1));
	}
	return (t);
}
/* 
#include <stdio.h>

int	main(void)
{
	int	x = 2;
	int power = 4;

	x = ft_recursive_power(x, power);
	printf("%d", x);
	return (0);
} 
 */