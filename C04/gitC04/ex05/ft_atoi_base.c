/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_atoi_base.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/03 12:47:44 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/03 12:47:52 by mgiraldi       ########   odam.nl        */
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

int	base_to_dec(char n, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (n == base[i])
			return (i);
		else
			i++;
	}
	return (-1);
}

int	whiteorplus(char c)
{
	if (c == ' ' || (c >= '\t' && c <= '\r'))
		return (2);
	if (c == '+')
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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	n;
	int	t;

	t = 0;
	n = 1;
	i = 0;
	if (base_validity(base) == 0)
		return (0);
	while (whiteorplus(str[i]) == 2)
		i++;
	while (whiteorplus(str[i]) == 1 || whiteorplus(str[i]) == -1)
	{
		n = whiteorplus(str[i]) * n;
		i++;
	}
	while (base_to_dec(str[i], base) != -1)
	{
		t = (t * ft_strlen (base)) + base_to_dec(str[i], base);
		i++;
	}
	return (t * n);
}

/* 
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

void	ft_putnbr_base(int nbr, char *base)
{
	char	c;
	long	n;
	int		i;

	if (base_validity(base) == 0)
		return ;
	i = 0;
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

int	main (void)
{
	char	*str;
	int		n;
	char	*b;

	b = "0123456789";
	str = "\n+--123+-1";
	n = ft_atoi_base(str, b);
	ft_putnbr_base(n, b);
	write(1, "\n", 1);
	ft_putnbr(n);
}
 */