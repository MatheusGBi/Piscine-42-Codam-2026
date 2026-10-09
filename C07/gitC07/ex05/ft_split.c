/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_split.c                                          :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/08/08 13:59:06 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/08/08 13:59:08 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int	separator(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		else
			i++;
	}
	return (0);
}

int	splitcounter(char *str, char *charset)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i])
	{
		if (separator(charset, str[i]) == 0
			&& (i == 0 || separator(charset, str[i - 1]) == 1))
			c++;
		i++;
	}
	return (c);
}

int	stringsize(char *str, char *charset)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i])
	{
		if (separator(charset, str[i]) == 0)
		{
			c++;
			i++;
		}
		else
			return (c);
	}
	return (c);
}

int	findnextsep(char *str, char *charset)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (separator(charset, str[i]) == 1)
			return (i);
		i++;
	}
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		x;
	char	**dest;

	i = 0;
	j = 0;
	x = 0;
	*dest = malloc(sizeof(char *) * (splitcounter(str, charset) + 1));
	while (i < splitcounter(str, charset))
	{
		dest[i] = malloc(sizeof(char) * stringsize(&str[j], charset));
		j = j + findnextsep(&str[i], charset);
		i++;
	}
	j = 0;
	i = 0;
	x = 0;
	while (str[i])
	{
		if (separator(charset, str[i]) == 0)
		{
			dest[j][x] = str[i];
			x++;
			i++;
		}
		while ((separator(charset, str[i]) == 1
				&& separator(charset, str[i - 1]) == 1) || i == 0)
			i++;
		if (separator(charset, str[i]) == 1)
		{
			x = 0;
			j++;
			i++;
		}
	}
	dest[j] = NULL;
	return (dest);
}
/* 
#include <unistd.h>



 int main(void)
{
    char    **test;
    char    *str;
    char    *charset;
    int     i;
    int     j;
    
    str = "ab1c1b23aaa223aab";
    charset = "abc";
    test = ft_split(str, charset);
    
    i = 0;
    while (test[i])
    {
        j = 0;
        while (test[i][j])
        {
            write(1, &test[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
    
    return (0);
}
 */