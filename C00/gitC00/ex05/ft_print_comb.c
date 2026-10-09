/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_print_comb.c                                     :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/22 16:16:42 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/07/23 13:06:05 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a != 7 || b != 8 || c != 9 )
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}

int main(void)
{
	ft_print_comb();
	return(0);
}

