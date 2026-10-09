/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_atoi.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/03 12:47:14 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/03 12:47:17 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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
++---2354-
int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	t;

	t = 0;
	n = 1;
	i = 0;
	if (str == NULL)
		return (0);
	while (whiteorplus(str[i]) == 2)
		i++;
	while (whiteorplus(str[i]) == 1 || whiteorplus(str[i]) == -1)
	{
		n = whiteorplus(str[i]) * n;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		t = (t * 10) + (str[i] - '0');
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

int	main(void)
{
	char	*str;
	int		n;

	str = "--+1234+56";
	n = ft_atoi(str);
	ft_putnbr(n);
}
 */