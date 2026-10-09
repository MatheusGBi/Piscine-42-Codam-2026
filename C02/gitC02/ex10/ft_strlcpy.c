/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlcpy.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgiraldi <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/28 12:50:09 by mgiraldi       #+#    #+#                */
/*   Updated: 2026/07/28 15:37:48 by mgiraldi       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	checklengh(char *src)
{
	int	x;

	x = 0;
	while (*src)
	{
		x++;
		src++;
	}
	return (x);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	y;

	y = 0;
	x = 0;
	if (size == 0)
	{
		x = checklengh(src);
		return (x);
	}
	x = checklengh(src);
	while (y < x && y < (size - 1))
	{
		*dest = *src;
		src++;
		dest++;
		y++;
	}
	*(dest) = '\0';
	return (x);
}
/*
int main(void)
{
	char			src[] = "Hello";
	char			dest[20];
	unsigned int	res;

	// Test 1: Normal copy with plenty of space
	dest[0] = '\0';
	res = ft_strlcpy(dest, src, sizeof(dest));
	printf("--- Test 1: Normal Copy ---\n");
	printf("Return (Expected 5): %u\n", res);
	printf("Dest (Expected \"Hello\"): \"%s\"\n\n", dest);

	// Test 2: Truncation case (size smaller than src)
	dest[0] = '\0';
	res = ft_strlcpy(dest, src, 3);
	printf("--- Test 2: Truncation (size = 3) ---\n");
	printf("Return (Expected 5): %u\n", res);
	printf("Dest[0] to Dest[2] (Expected \"He\\0\"):
	dest[0]=%c, dest[1]=%c, dest[2]=%c (int: %d)\n\n", 
		dest[0], dest[1], dest[2], dest[2]);

	// Test 3: Size 0 case
	dest[0] = 'A';
	res = ft_strlcpy(dest, src, 0);
	printf("--- Test 3: Size = 0 ---\n");
	printf("Return (Expected 5): %u\n", res);
	printf("Dest[0] should remain untouched ('A'): '%c'\n", dest[0]);

	return (0);
}
*/
