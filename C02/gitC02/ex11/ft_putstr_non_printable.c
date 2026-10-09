/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putstr_non_printable.c                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/28 15:39:16 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/07/28 16:38:33 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char				*x;
	char				b;
	char				a;
	unsigned char		z;

	x = "0123456789abcdef";
	while (*str)
	{
		z = *str;
		if (z >= 32 && z <= 126)
			write(1, &z, 1);
		else
		{
			write(1, "\\", 1);
			a = x[(z / 16)];
			b = x[(z % 16)];
			write(1, &a, 1);
			write(1, &b, 1);
		}
		str++;
	}
}
/*
int	main(void)
{
	char	*c = "Hello\nHow are you?";

	ft_putstr_non_printable(c);
	return (0);
}
*/
