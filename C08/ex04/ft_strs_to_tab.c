/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strs_to_tab.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/12 16:26:09 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/12 16:26:11 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include "ft_strs_to_tab.h"

int	lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*cpstr(char *str)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(lenght(str) + 1);
	if (!dest)
		return (NULL);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*dest;

	i = 0;
	dest = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!dest)
		return (NULL);
	while (i < ac)
	{
		dest[i].size = lenght(av[i]);
		dest[i].str = av[i];
		dest[i].copy = cpstr(av[i]);
		i++;
	}
	dest[i].size = 0;
	dest[i].str = 0;
	dest[i].copy = 0;
	return (dest);
}
/* 
#include<stdio.h>
 int	main(int argc, char **argv)
 {
	int	i = 0;
	t_stock_str	*dest;

	dest = ft_strs_to_tab(argc, argv);
	while(dest[i].size)
	{
		printf("%d\n%s\n%s\n\n", dest[i].size, dest[i].str, dest[i].copy);
		i++;
	}
	return (0);
 }
 */