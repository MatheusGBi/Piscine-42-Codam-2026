/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strupcase.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/27 14:59:48 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/07/27 16:15:52 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char	*rtn;

	rtn = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
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
        char    test[] = "a22222SASDAabbvv";
	char	*test2;	
	test2 = ft_strupcase(test);
	while(*test2)
	{
	write(1 , test2 , 1);
	test2++;
	}
	return(0);
}
*/
