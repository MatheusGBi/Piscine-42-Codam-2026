/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcapitalize.c                                  :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/27 14:59:48 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/01 10:31:08 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char str)
{
	if (str == '\0')
		return (1);
	else if ((str >= 65 && str <= 90) || (str >= 97 && str <= 122))
		return (1);
	return (0);
}

int	ft_str_is_numeric(char str)
{
	if (str == '\0')
		return (1);
	else if (str >= 48 && str <= 57)
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char str)
{
	if (str == '\0')
		return (1);
	else if (str >= 'a' && str <= 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*rtn;

	if (!*str)
		return (str);
	rtn = str;
	if (ft_str_is_lowercase(*str))
		*str = *str - 32;
	str++;
	while (*str)
	{
		if (ft_str_is_alpha(*str) && ft_str_is_lowercase(*str)
			&& !(ft_str_is_alpha(*(str - 1)))
			&& !(ft_str_is_numeric(*(str - 1))))
			*str = *str - 32;
		else if (ft_str_is_alpha(*str) && !(ft_str_is_lowercase(*str))
			&& ((ft_str_is_alpha(*(str - 1)))
				|| (ft_str_is_numeric(*(str - 1)))))
			*str = *str + 32;
		str++;
	}
	str = rtn;
	return (rtn);
}
/* 
int     main(void)
{
        char    test[] = "4 4hEllO 4Hi, how are you?nd+one";
	char	*test2;	
	test2 = ft_strcapitalize(test);
	while(*test2)
	{
	write(1 , test2 , 1);
	test2++;
	}
	return(0);
}
*/
