/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_convert_base2.c                                  :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/08 13:58:30 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/08 13:58:32 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

int	basecheck(char c, char *base);
int	lengh(char *c);
int	basetoint(char c, char *base);
int	base_validity(char *base);
int	atoi_base(char *str, char *base);

int	new_lengh(long n, char *base)
{
	int	i;

	i = 1;
	if (n < 0)
		n = -n;
	if (n > (lengh(base) - 1))
		i = i + new_lengh(n / lengh(base), base);
	return (i);
}

void	inttobase(int t, char *base, int *index, char *new)
{
	long	nb;

	nb = t;
	if (nb < 0)
	{
		new[*index] = '-';
		(*index)++;
		nb = -nb;
	}
	if (nb >= lengh(base))
		inttobase(nb / lengh(base), base, index, new);
	new[*index] = base[nb % lengh(base)];
	(*index)++;
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		t;
	int		i;
	char	*new;

	if (base_validity(base_from) == 0 || base_validity(base_to) == 0)
		return (NULL);
	t = atoi_base(nbr, base_from);
	i = new_lengh(t, base_to);
	if (t < 0)
		new = malloc(i + 2);
	else
		new = malloc(i + 1);
	i = 0;
	inttobase(t, base_to, &i, new);
	new[i] = '\0';
	return (new);
}
/* 
int	main(void)
{
	char	*c;
	char	*b1;
	char	*b2;
	char	*r;
	int		i = 0;

	b1 = "0123456789";
	b2 = "0123456789abcdef";
	c = "-2000";
	r = ft_convert_base(c, b1, b2);
	while(r[i])
	{
		write(1, &r[i], 1);
		i++;
	}
	if(!r[i])
		write(1, ".\n", 2);
	return (0);
} 
*/