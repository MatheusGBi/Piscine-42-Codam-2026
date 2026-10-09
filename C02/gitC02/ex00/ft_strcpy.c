/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcpy.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/26 12:14:45 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/07/27 12:30:02 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*rtr;

	rtr = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (rtr);
}
/*
int main(void)
{
    char s1[20] = "Hello";    // Allocated on the stack, fully modifiable!
    char *s2 = "Good Bye";     // Source can remain a string literal pointer

    ft_strcpy(s1, s2);

    int result = strcmp(s1, s2);

    if (result == 0)
        printf("The strings are identical.\n");
    else
        printf("The strings are different.\n");

    return (0);
}
*/
