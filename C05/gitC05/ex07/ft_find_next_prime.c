/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_find_next_prime.c                                :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/07 11:00:58 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/07 11:01:08 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (nb <= 1)
		return (0);
	while (i < nb / 2 + 1)
	{
		if (nb % i == 0)
		{
			j++;
			i++;
		}
		else
			i++;
	}
	if (j == 1)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (ft_is_prime(i) != 1)
		i++;
	return (i);
}
/* 
#include <stdio.h>

int	main(void)
{
	int x;

	x = ft_find_next_prime(1);
	printf("%d", x);
	return (0);
}
 */
