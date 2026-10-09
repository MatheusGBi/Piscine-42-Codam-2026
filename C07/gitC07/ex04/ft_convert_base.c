/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_convert_base.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/08 13:58:42 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/08 13:58:49 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	basecheck(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	lengh(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}

int	basetoint(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		else
			i++;
	}
	return (i);
}

int	base_validity(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (lengh(base) == 0 || lengh(base) == 1)
		return (0);
	while (base[i])
	{
		if ((base[i] >= '\t' && base[i] <= '\r') || base[i] == ' '
			|| base[i] == '+' || base[i] == '-')
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

int	atoi_base(char *str, char *base)
{
	int		i;
	int		n;
	int		t;

	t = 0;
	n = 1;
	i = 0;
	if (base_validity(base) == 0)
		return (0);
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			n = -n;
		i++;
	}
	while (basecheck(str[i], base) == 1)
	{
		t = t * lengh(base) + basetoint(str[i], base);
		i++;
	}
	return (t * n);
}
