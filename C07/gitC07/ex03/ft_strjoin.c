/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strjoin.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/08 13:57:41 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/08 13:57:44 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

int	ft_lengh(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

int	ft_lengh2(char **s, int size)
{
	int	i;
	int	t;

	t = 0;
	i = 0;
	while (i < size)
	{
		t = t + ft_lengh(s[i]);
		i++;
	}
	return (t);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i[3];

	if (size <= 0)
	{
		dest = malloc(1);
		dest[0] = '\0';
		return (dest);
	}
	dest = malloc(ft_lengh2(strs, size) + (ft_lengh(sep) * (size - 1)) + 1);
	i[0] = 0;
	i[2] = 0;
	i[1] = 0;
	while (i[0] < size)
	{
		while (strs[i[0]][i[2]])
			dest[i[1]++] = strs[i[0]][i[2]++];
		i[2] = 0;
		while (sep[i[2]] && (i[0] < size - 1))
			dest[i[1]++] = sep[i[2]++];
		i[2] = 0;
		i[0]++;
	}
	dest[i[1]] = '\0';
	return (dest);
}
/* 
int	main(void)
{
	char	*c[] = {"Hello", "World", "Bye"};
	int		s = 3;
	char	b[] = {"+-+-+-+-+-+"};
	char	*x;
	int		i = 0;

	x = ft_strjoin(s, c, b);
	while (x[i])
	{
		write(1, &x[i], 1);
		i++;
	}
	if (!x[i])
	write(1, "*", 1);
	return (0);
}
 */