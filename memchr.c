/*#include <stdio.h>*/
/*#include <string.h>*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	
	i = 0;
	while (*(unsigned char *)s != c && i < n)
	{
		s++;
		i++;
	}
	if (i == n)
		return (0);
	return ((void *)s);
}

/*int main(void)*/
/*{*/
	/*char s[] = "1,2,3";*/

	/*char *ptr1;*/
	/*ptr1 = memchr(s, '4', strlen(s));*/

	/*printf("%p\n", ptr1);*/
	/*char *ptr2;*/
	/*ptr2 = ft_memchr(s, '4', strlen(s));*/

	/*printf("%p", ptr2);*/

/*}*/
