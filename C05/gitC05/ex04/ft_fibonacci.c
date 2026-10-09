/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_fibonacci.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/06 17:37:07 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/06 17:37:09 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	i;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index > 1)
	{
		i = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (i);
	}
	return (0);
}
/* 
#include <stdio.h>

int main(void)
{
	int	x = 4;

	x = ft_fibonacci(x);
	printf("%d", x);
	return (0);
}
 */