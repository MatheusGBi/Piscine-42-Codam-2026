/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_ultimate_range.c                                 :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/08 13:56:57 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/08 13:57:02 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	i = 0;
	j = min;
	while (i < (max - min))
	{
		(*range)[i] = j;
		j++;
		i++;
	}
	return (max - min);
}
/* 
int main(void)
{
	int x = 5;
	int	y = 12;
	int	*dest;
	int	i;
	int	j;

	j = y - x;
	i = 0;
	j = ft_ultimate_range(&dest, 0, 5000000);
	while (i < j)
	{
		printf("%d\n", dest[i]);
		i++;
	}
	free (dest);
	return (0);
}
 */