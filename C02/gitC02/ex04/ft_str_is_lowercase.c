/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_lowercase.c                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/27 14:59:48 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/07/27 15:12:25 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
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
        char    str3[] = "12aaaaa";
        int     x;
        char    y;

        x = ft_str_is_lowercase(str1);
        y = x + '0';
        write(1,&y, 1);
        x = ft_str_is_lowercase(str2);
        y = x + '0';
        write(1,&y, 1);
        x = ft_str_is_lowercase(str3);
        y = x + '0';
        write(1,&y, 1);

}
*/
