/*#include <stdio.h>*/
/*#include <string.h>*/
#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t i;
	
	i = 0;
	while (i < num)
	{
		if (*(char *)ptr1 != *(char *)ptr2)
			return (*(char *)ptr1 - *(char *)ptr2);
		/*if (*(char *)ptr1 < *(char *)ptr2)*/
			/*return (-1);*/
		/*else if (*(char *)ptr1 > *(char *)ptr2)*/
			/*return (1);*/
		else
		{
			i++;
			ptr1++;
			ptr2++;
		}
	}
	return (0);
}
/*int main(void)*/
/*{*/
	/*char s[] = "";*/
	/*printf("%d\n", memcmp(s, s, 3));*/
	/*printf("%d", ft_memcmp(s, s, 3));*/
	/*return (0);*/
/*}*/
