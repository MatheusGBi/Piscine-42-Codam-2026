/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlen.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/03 12:46:31 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/03 12:46:35 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/* 
int	main(void)
{
	int	i;
	char a;
	char *c = "123456";

	i = ft_strlen(c);
	a = i + '0';
	write(1, &a, 1);
	return (0);
} 
 */