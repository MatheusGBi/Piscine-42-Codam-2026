/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putnbr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/03 12:47:02 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/03 12:47:05 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;
	long	n;

	n = nb;
	if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	c = (n % 10) + '0';
	write (1, &c, 1);
}

int	main(void)
{
	int	x;

	write (1, &x, 1);
	x = (-2147483648);
	ft_putnbr(x);
	write (1, "\n", 1);
	x = (2147483647);
	ft_putnbr(x);
	write (1, "\n", 1);
	x = (1234);
	ft_putnbr(x);
	write (1, "\n", 1);
	x = (-1234);
	ft_putnbr(x);
	write (1, "\n", 1);
	return (0);
}
