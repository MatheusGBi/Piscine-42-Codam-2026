/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_range.c                                          :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/08 13:56:29 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/08 13:56:34 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	j;

	if (min >= max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min));
	if (!arr)
		return (NULL);
	i = 0;
	j = min;
	while (i < (max - min))
	{
		arr[i] = j;
		j++;
		i++;
	}
	return (arr);
}
/* #include<stdio.h>

int main(void)
{
	int x = 10;
	int	y = 12;
	int	*dest;
	int i;
	int j;

	j = y - x;
	i = 0;
	dest = ft_range(x, y);
	while (i < j)
	{
		printf("%d\n", dest[i]);
		i++;
	}
	free (dest);
	return (0);
}
 */