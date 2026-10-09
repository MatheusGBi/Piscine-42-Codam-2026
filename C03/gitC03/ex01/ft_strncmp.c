/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncmp.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/30 14:07:41 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/07/30 14:07:44 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (s1[i] > s2[i] || s2[i] > s1[i])
			return (s1[i] - s2[i]);
		if (!s1[i] || !s2[i])
			return (0);
		else
			i++;
	}
	return (0);
}
/* 
int	main(void)
{
	char	*x;
	char	*y;
	int	v = 100;
	char p;
	x = "mmnmnmnmnm";
	y = "m0nmnmnmnm";
	v = ft_strncmp(x, y, 100);
	if (v >= 0)
		p = v + '0';
	else
		p = -v + '0';
	if (v > 0)
		write(1, &p, 1);
	if (v < 0)
	{
		write(1, "-", 1);
		write(1, &p, 1);
	}
	if (v==0)
		write(1, &p, 1);
	return (0);
}
 */
