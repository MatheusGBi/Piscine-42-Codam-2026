/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush01.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: elifbece <elifbece@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/25 14:34:19 by elifbece      #+#    #+#                 */
/*   Updated: 2026/07/25 21:05:03 by elifbece      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		check_input(int x, int y);

void	rush01(int x, int y)
{
	int	col;
	int	row;

	if (check_input (x, y) == -1)
		return ;
	col = 1;
	row = 1;
	while (row <= y)
	{
		while (col <= x)
		{
			if ((col == 1 && row == 1) || (col == x && row == y))
				ft_putchar('/');
			else if ((col == x && row == 1) || (col == 1 && row == y))
				ft_putchar('\\');
			else if (row == 1 || row == y || (col == 1 || col == x))
				ft_putchar ('*');
			else
				ft_putchar (' ');
			col ++;
		}
		ft_putchar ('\n');
		col = 1;
		row ++;
	}
}
