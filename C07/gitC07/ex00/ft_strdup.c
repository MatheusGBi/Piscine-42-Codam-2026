/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strdup.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/08 13:55:55 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/08 13:56:01 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		j;

	j = 0;
	while (src[j])
		j++;
	dest = malloc(j + 1);
	i = 0;
	while (i <= j)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/* 
int	main(void)
{
	char *d;
	char *s;
	int	i;

	i = 0;
	s = "Hello";
	d = ft_strdup(s);
	while (d[i])
	{
		write(1, &d[i], 1);
		i++;
	}
	if (d[i] == '\0')
		write(1, ".", 1);	
	free (d);
	return (0);
} */
