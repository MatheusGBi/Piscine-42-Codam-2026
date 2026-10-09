/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putnbr_base.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/03 12:47:25 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/03 12:47:34 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	whiteorplus(char c)
{
	if (c == ' ' || (c >= '\t' && c <= '\r') || c == '+')
		return (1);
	if (c == '-')
		return (-1);
	else
		return (0);
}

int	base_validity(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (0);
	while (base[i])
	{
		if (whiteorplus(base[i]) != 0)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	c;
	long	n;
	int		i;

	if (base_validity(base) == 0)
		return ;
	i = ft_strlen(base);
	n = nbr;
	if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
	}
	if (n > (i - 1))
	{
		ft_putnbr_base ((n / i), base);
	}
	c = base[n % i];
	write (1, &c, 1);
}
/* 
int	main(void)
{
	int		x;
	char	*b;

	b = "01";
	x = (-2147483648);
	ft_putnbr_base(x, b);
	write (1, "\n", 1);
	x = (2147483647);
	ft_putnbr_base(x,b);
	write (1, "\n", 1);
	x = (1234);
	ft_putnbr_base(x,b);
	write (1, "\n", 1);
	x = (-1234);
	ft_putnbr_base(x,b);
	write (1, "\n", 1);
	return (0);
}
 */
