/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_print_reverse_alphabet.c                         :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiraldi <mgiraldi@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+++#+   */
/*   Created: 2026/07/22 13:12:03 by mgiraldi          #+#    #+#             */
/*   Updated: 2026/07/22 14:13:03 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alpha;

	alpha = 'z';
	while (alpha >= 'a')
	{
		write(1, &alpha, 1);
		alpha--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
