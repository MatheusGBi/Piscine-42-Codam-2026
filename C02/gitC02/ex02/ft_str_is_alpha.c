/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_alpha.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/27 14:20:37 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/07/27 14:48:01 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str < 65 || (*str > 90 && *str < 97) || *str > 122)
			return (0);
		else
			str++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1 = "Hello";
	char	*str2 = "he00l";
	char	str3[] = "";
	int	x;
	char	y;

	x = ft_str_is_alpha(str1);
	y = x + '0';
	write(1,&y, 1);
        x = ft_str_is_alpha(str2);
	y = x + '0';
        write(1,&y, 1);
	x = ft_str_is_alpha(str3);
	y = x + '0';
        write(1,&y, 1);

}
*/
