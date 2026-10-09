/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                 :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiraldi <mgiraldi@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+++#+   */
/*   Created: 2026/07/22 13:12:03 by mgiraldi          #+#    #+#             */
/*   Updated: 2026/07/22 13:41:02 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		write(1, &alpha, 1);
		alpha++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
