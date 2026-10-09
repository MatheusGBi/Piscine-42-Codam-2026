/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                  :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiraldi <mgiraldi@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+++#+   */
/*   Created: 2026/07/22 14:16:41 by mgiraldi          #+#    #+#             */
/*   Updated: 2026/07/23 13:12:49 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int	number;

	number = '0';
	while (number <= '9')
	{
		write(1, &number, 1);
		number++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
