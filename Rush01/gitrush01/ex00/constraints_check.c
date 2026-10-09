/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraints_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnegire <esnegire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 21:20:07 by esnegire          #+#    #+#             */
/*   Updated: 2026/08/02 22:57:41 by esnegire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	count_vertical(char **possibilities, int i,
						int *start_count, int *end_count) {
	int		start_max;
	int		end_max;
	int		j;

	start_max = 0;
	end_max = 0;
	j = 0;
	while (j < 4)
	{
		if (possibilities[i][j] > start_max)
		{
			++*start_count;
			start_max = possibilities[i][j];
		}
		if (possibilities[i][4 - 1 - j] > end_max)
		{
			++*end_count;
			end_max = possibilities[i][4 - 1 - j];
		}
		++j;
	}
}

int	vertical_constrains_check(char **possibilities, char **constraints)
{
	int		start_count;
	int		end_count;
	int		i;

	i = 0;
	while (i < 4)
	{
		start_count = 0;
		end_count = 0;
		count_vertical(possibilities, i, &start_count, &end_count);
		if (start_count != constraints[2][i] || end_count != constraints[3][i])
			return (-1);
		++i;
	}
	return (0);
}

void	count_horiz(char **possibilities, int i,
					int *start_count, int *end_count) {
	int		start_max;
	int		end_max;
	int		j;

	start_max = 0;
	end_max = 0;
	j = 0;
	while (j < 4)
	{
		if (possibilities[i][j] > start_max)
		{
			++*start_count;
			start_max = possibilities[i][j];
		}
		if (possibilities[i][4 - 1 - j] > end_max)
		{
			++*end_count;
			end_max = possibilities[i][4 - 1 - j];
		}
		++j;
	}
}

int	horiz_constrains_check(char **possibilities, char **constraints)
{
	int		start_count;
	int		end_count;
	int		i;

	i = 0;
	while (i < 4)
	{
		start_count = 0;
		end_count = 0;
		count_horiz(possibilities, i, &start_count, &end_count);
		if (start_count != constraints[2][i] || end_count != constraints[3][i])
			return (-1);
		++i;
	}
	return (0);
}

int	constrains_check(char **possibilities, char **constraints)
{
	if (vertical_constrains_check(possibilities, constraints) == -1)
		return (-1);
	if (horiz_constrains_check(possibilities, constraints) == -1)
		return (-1);
	return (0);
}
