/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_print_memory.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/28 16:39:26 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/02 11:46:28 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hex_adress(void *ptr)
{
	char				*h;
	unsigned long long	c;
	unsigned char		hex[16];
	int					i;

	i = 15;
	h = "0123456789abcdef";
	c = (unsigned long long)ptr;
	while (i >= 0)
	{
		hex[i] = h[c % 16];
		c = c / 16;
		i--;
	}
	write(1, hex, 16);
	write(1, ": ", 2);
}

void	convert_hex(char *ptr, char *x)
{
	char				*h;
	unsigned long long	c;

	h = "0123456789abcdef";
	c = (unsigned char)*ptr;
	x[0] = h[c / 16];
	x[1] = h[c % 16];
}

void	hex_letter(char *ptr, unsigned int rem)
{
	unsigned int	j;
	char			x[2];

	j = 0;
	while (j < 16)
	{
		if (j < rem)
		{
			convert_hex((ptr + j), x);
			write(1, x, 2);
			convert_hex((ptr + j + 1), x);
			if (j < rem - 1)
				write(1, x, 2);
			else
				write(1, "  ", 2);
			write(1, " ", 1);
		}
		else
			write(1, "     ", 5);
		j = j + 2;
	}
}

void	print_letter(char *ptr, unsigned int rem)
{
	unsigned int	j;

	j = 0;
	while (j < 16)
	{
		if (j < rem)
		{
			if (*(ptr + j) >= 32 && *(ptr + j) <= 126)
				write (1, (ptr + j), 1);
			else
				write (1, ".", 1);
		}
		else
			write (1, " ", 1);
		j++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	s;
	unsigned int	r;

	if (size == 0)
		return (addr);
	else
	{
		i = 0;
		s = 0;
		while (i < ((size + 15) / 16))
		{
			r = 16;
			if (size - s <= 16)
				r = size - s;
			hex_adress(addr + s);
			hex_letter(addr + s, r);
			print_letter(addr + s, r);
			write(1, "\n", 1);
			s = s + 16;
			i++;
		}
	}
	return (addr);
}
/*
int	main(void)
{
	char *y;
	int x;
	
	x = 19;
	y =  "xxxxxxxxxxxxxxxxxxxx";
	ft_print_memory(y, x);
	return(0);
}
*/
