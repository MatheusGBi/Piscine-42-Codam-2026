/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   strl_cat.c                                          :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/02 14:17:35 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/02 14:17:37 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;
	int	k;
	int	t;

	j = 0;
	i = 0;
	while (src[i])
		i++;
	while (dest[j])
		j++;
	t = i + j;
	k = j;
	if (j <= size)
		return (t);
	i = 0;
	while (j + 1 < size && src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (t);
}
/* 
int	main(void)
{
	int i = 0;
	char dest[100] = "good bye";
	char *src;
	int size = 11;

	src = " hello world";
	size = ft_strlcat (dest, src, size);
	while (dest[i])
	{
		write(1, &dest[i], 1);
		i++;
	}
	if (!dest[i+1])
		write(1, "\\0", 2);
	return(0);
} */
