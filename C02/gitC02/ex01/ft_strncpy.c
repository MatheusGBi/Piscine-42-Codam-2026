/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncpy.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/27 12:31:19 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/01 13:57:27 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	d[21];
	char	*s;
	int	n;
	int	i;
	
	s = "0123456789";
	n = 20;
	i = 0;
	ft_strncpy(d, s, n);
	while(i < 20)
	{
		if(d[i] != '\0') 
		write(1, &d[i], 1);
		else
		write(1, "\\0", 2);
		i++;
	}
	return (0);	
}
*/
