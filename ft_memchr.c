#include <stdio.h>
#include <string.h>

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

int main(void)
{
	char s[] = "12345";

	char *ptr1;
	char c = '1';
	size_t i = 0;
	ptr1 = memchr(s, c, i);

	/** printf("c : %p\n", ptr1); */
	printf("c : %s\n", ptr1);
	char *ptr2;
		ptr2 = ft_memchr(s, c, i);

	/** printf("ft : %p", ptr2); */
	printf("ft : %s\n", ptr2);

}
