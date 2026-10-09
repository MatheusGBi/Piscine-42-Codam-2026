/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_uppercase.c                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/27 14:59:48 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/07/27 15:37:40 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		else
			str++;
	}
	return (1);
}
/*
int     main(void)
{
        char    *str1 = "aaaA";
        char    *str2 = "aabbvv";
        char    str3[] = "AAAAA";
        int     x;
        char    y;

        x = ft_str_is_uppercase(str1);
        y = x + '0';
        write(1,&y, 1);
        x = ft_str_is_uppercase(str2);
        y = x + '0';
        write(1,&y, 1);
        x = ft_str_is_uppercase(str3);
        y = x + '0';
        write(1,&y, 1);

}
*/
