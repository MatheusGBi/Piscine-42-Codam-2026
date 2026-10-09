/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strstr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/02 12:02:24 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/02 12:02:26 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (NULL);
}
/* 
int	main(void)
{
	char	*str;
	char	*find;
	char	*c;

	find = "come";
	str = "hllo, welcome home";
	c = ft_strstr(str, find);
	if(c != NULL)
		while (*c)
		{
		write (1, &*c, 1);
		c++;	
		}
	else
		write(1, ".", 1);
	return(0);
} 
 */