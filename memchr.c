#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long i;
	
	i = 0;
	while (*(char *)s != c && i < n)
	{
		s++;
		i++;
	}
	if (i == n)
		return (0);
	return ((void *)s);
}

int main()
{
	char s[] = "1,2,3";

	char *ptr1;
	ptr1 = memchr(s, '3', strlen(s));

	printf("%p\n", ptr1);
	char *ptr2;
	ptr2 = ft_memchr(s, '3', strlen(s));

	printf("%p", ptr2);

}
