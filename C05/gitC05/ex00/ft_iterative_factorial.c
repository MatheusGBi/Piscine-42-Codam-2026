/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*    ft_iterative_factorial.c                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/05 16:18:46 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/05 16:18:49 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	t;

	i = nb - 1;
	t = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i > 0)
	{
		t = t * i;
		i--;
	}
	return (t);
}
/* 
#include <stdio.h>

int	main(void)
{
	int	x;

	x = -1;
	x = ft_iterative_factorial(x);
	printf("%d", x);
	return (0);
}
 */