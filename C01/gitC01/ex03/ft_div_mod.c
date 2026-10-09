/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_div_mod.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/23 16:17:21 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/07/30 13:47:37 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	a;
	int	b;
	int	*d;
	int	*m;

	a = 15;
	b = 3;
	
	// Allocate memory for the pointers
	d = malloc(sizeof(int));
	m = malloc(sizeof(int));
	
	if (!d || !m)
		return (1); // Guard against allocation failure
	
	// Pass the pointers directly (since they already point to allocated memory)
	ft_div_mod(a, b, d, m);
	
	// Dereference (*) the pointers to print the values inside them
	printf("Division: %d\n", *d);
	printf("Modulo: %d\n", *m);
	
	// Free the allocated memory when done
	free(d);
	free(m);
	
	return (0);	
}
