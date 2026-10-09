/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_recursive_factorial.c                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/06 13:07:10 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/06 13:07:13 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 1;
	if (nb > 0)
		i = nb * ft_recursive_factorial(nb - 1);
	return (i);
}
/* 
#include <stdio.h>
int	main(void)
{
	int	x;

	x = 12;
	x = ft_recursive_factorial(x);
	printf("%d", x);
	return (0);
}
 */
