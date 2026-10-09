/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_rev_int_tab.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/25 10:51:11 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/07/25 12:31:12 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	t;

	while (size > 1)
	{
		t = *tab;
		*tab = *(tab + size - 1);
		*(tab + size - 1) = t;
		tab++;
		size = size - 2;
	}
}
