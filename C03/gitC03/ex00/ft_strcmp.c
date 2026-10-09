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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
		{
			i++;
		}	
	}
	return (0);
}

int	main(void)
{
	char	*x;
	char	*y;
	int	v;
	char p;

	x = "abc";
	y = "ab";
	v = ft_strcmp(x, y);
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
