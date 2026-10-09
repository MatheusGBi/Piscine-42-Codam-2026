/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlowcase.c                                     :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/27 14:59:48 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/07/27 16:17:51 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	char	*rtn;

	rtn = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
			str++;
		}
		else
			str++;
	}
	return (rtn);
}
/*
int     main(void)
{
        char    test[] = "aaaa AAAA hhh HHH 33322";
	char	*test2;	
	test2 = ft_strlowcase(test);
	while(*test2)
	{
	write(1 , test2 , 1);
	test2++;
	}
	return(0);
}
*/
