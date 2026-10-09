/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                    :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiraldi <mgiraldi@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+++#+   */
/*   Created: 2026/07/22 15:10:20 by mgiraldi          #+#    #+#             */
/*   Updated: 2026/07/22 15:39:49 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = (-100);
	b = (75);
	c = (0);
	ft_is_negative(a);
	ft_is_negative(b);
	ft_is_negative(c);
}
*/
