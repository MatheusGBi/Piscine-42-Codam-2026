/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_numeric.c                                 :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/27 14:50:04 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/07/27 15:03:08 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str < 48 || *str > 57)
			return (0);
		else
			str++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1 = "1235490";
	char	*str2 = "he00l";
	char	str3[] = "";
	int	x;
	char	y;

	x = ft_str_is_numeric(str1);
	y = x + '0';
	write(1,&y, 1);
        x = ft_str_is_numeric(str2);
	y = x + '0';
        write(1,&y, 1);
	x = ft_str_is_numeric(str3);
	y = x + '0';
        write(1,&y, 1);

}
*/
