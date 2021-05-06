/*#include <stdio.h>*/
/*#include <string.h>*/
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t ft_strlcpy(char *dst, const char *src, size_t num)
{
	size_t i;
	size_t ret;

	i = 0;
	ret = ft_strlen(src);
	while (i < num - 1)
	{
		dst[i] = *src;
		src++;
		i++;
	}
	dst[i] = '\0';
	return (ret);
}

/*int main(void)*/
/*{*/
	/*char str1[10];*/
	/*char str2[10];*/

	/*printf("%ld\n", strlcpy(str1, "123456", 4));*/
	/*printf("%s\n", str1);*/
	/*printf("%ld\n", ft_strlcpy(str2, "123456", 4));*/
	/*printf("%s\n", str2);*/
	/*return (0);*/
/*}*/
