/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_sqrt.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/07 11:00:28 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/07 11:00:30 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i <= nb / 2 + 1)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
/* 
#include <stdio.h>

int	main(void)
{
	int x;

	x = ft_sqrt(1);
	printf("%d", x);
	return (0);
}
 */