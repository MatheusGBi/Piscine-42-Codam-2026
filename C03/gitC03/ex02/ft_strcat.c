/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncat.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/30 14:32:42 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/07/30 14:32:45 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	y;
	int	c;

	y = 0;
	x = 0;
	c = 0;
	while (dest[x])
		x++;
	while (src[y])
		y++;
	while (c < y)
	{
		dest[x] = src[c];
		c++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

int	main(void)
{
	char	*src;
	char	dest[8];
	int	i;

	i = 0;
	src = "abcdefg";
	ft_strcat(dest, src);
	while (dest[i])
	{
		write(1, &dest[i], 1);
		i++;
	}
	if (!dest[i])
		write(1, "\\0", 2);
	return(0);
}
