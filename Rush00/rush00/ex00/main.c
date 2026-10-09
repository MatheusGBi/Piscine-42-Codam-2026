/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: elifbece <elifbece@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/25 14:33:29 by elifbece      #+#    #+#                 */
/*   Updated: 2026/07/25 21:02:33 by elifbece      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);

int	check_input(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write (1, "Error: Wrong input\n", 19);
		return (-1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	if (argv[1][0] == '0')
		rush00 (5, 5);
	else if (argv[1][0] == '1')
		rush01 (5, 5);
	else if (argv[1][0] == '2')
		rush02 (5, 5);
	else if (argv[1][0] == '3')
		rush03 (5, 5);
	else if (argv[1][0] == '4')
		rush04 (5, 5);
	return (0);
}
