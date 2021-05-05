/*#include <stdio.h>*/
/*#include <string.h>*/
#include "libft.h"
void	*ft_memccpy(void *dest, const void *source, int c, size_t n)
{
	unsigned long i;

	i = 0;
	while (i < n && *(char *)dest != c)
	{
		*(char *)dest = *(char *)source;
		dest++;
		source++;
		i++;
	}
	return (dest);
}

/*int main()*/
/*{*/
	/*int dest[10];*/
	/*int source[7] = {1,2,3,4,5,6,7}; */
	/*memccpy(dest, source, 7, sizeof(source));*/
	/*for (int i = 0; i < 10; i++)*/
	/*{*/
		/*printf("%d ", dest[i]);*/
	/*}*/
	/*printf("\n -- start --\n");*/
	/*ft_memccpy(dest, source, 7, sizeof(source));*/
	/*for (int i = 0; i < 10; i++)*/
	/*{*/
		/*printf("%d ", dest[i]);*/
	/*}*/
/*}*/
