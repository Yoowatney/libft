/*#include <stdio.h>*/
/*#include <string.h>*/
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char temp[num + 1];
	unsigned long i;

	i = 0;
	while (i < num)
	{
		temp[i] = *(unsigned char *)src;
		src++;
		i++;
	}
	i = 0;
	while (i < num)
	{
		*(unsigned char *)dest = temp[i];
		dest++;
		i++;
	}
	return (dest);
}

/*int main()*/
/*{*/
	/*[>int arr[10];<]*/
	/*int src1[100] = {0, 1, 2, 3, 4, 5, 6, 7, 8};*/
	/*int src2[100] = {0, 1, 2, 3, 4, 5, 6, 7, 8};*/

	/*memmove(src1 + 2, src1, sizeof(int) * 98);*/
	/*[>* ft_memmove(src1 + 4, src1 + 2, sizeof(int) * 17); <]*/
	/*for (int i = 0; i < 20; i++)*/
	/*{*/
		/*printf("%d ", src1[i]);*/
	/*}*/
	/*printf("\n");*/
	/*memmove(src2 + 4, src2 + 2, sizeof(int) * 17);*/
	/*for (int i = 0; i < 20; i++)*/
	/*{*/
		/*printf("%d ", src2[i]);*/
	/*}*/
/*}*/
