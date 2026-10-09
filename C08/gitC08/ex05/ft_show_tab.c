/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_show_tab.c                                       :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/13 12:41:38 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/13 12:41:44 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <unistd.h>

void	putnbr(int s)
{
	char	c;

	if (s > 9)
		putnbr(s / 10);
	c = (s % 10) + '0';
	write (1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	j;

	i = 0;
	while (par[i].str)
	{
		j = 0;
		while (par[i].str[j])
		{
			write(1, &par[i].str[j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		putnbr(par[i].size);
		write(1, "\n", 1);
		while (par[i].copy[j])
		{
			write(1, &par[i].copy[j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}
