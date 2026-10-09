/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_sort_int_tab.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/25 13:07:58 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/07/26 11:26:42 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	c1;
	int	c2;
	int	t;

	c2 = 0;
	while (c2 < size)
	{
		c1 = 0;
		x = *(tab + c2);
		while (c1 < size)
		{
			if (*(tab + c1) > x)
			{
				t = *(tab + c1);
				*(tab + c1) = x;
				*(tab + c2) = t;
				x = t;
			}
			c1++;
		}
		c2++;
	}
}
