/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncat.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/31 10:28:56 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/07/31 10:28:59 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				x;
	unsigned int	c;

	x = 0;
	c = 0;
	while (dest[x])
		x++;
	while (c < nb && src[c])
	{
		dest[x] = src[c];
		c++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
/* 
int	main(void)
{
	int i = 0;
	char dest[100] = "good bye";
	char *src;
	char dest2[100];
	int size = 11;

	src = " hello world";
	dest2[0] = ft_strncat (dest, src, size);
	while (dest2[i])
	{
		write(1, &dest[i], 1);
		i++;
	}
	if (!dest2[i+1])
		write(1, "\\0", 2);
	return(0);
} */