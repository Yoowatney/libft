/*#include <stdio.h>*/
/*#include <string.h>*/
#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned long i;
	
	i = 0;
	while (i < num)
	{
		*(char *)ptr = value;
		i++;
		ptr++;
	}
	return (ptr);
}

/*#include <stdio.h>*/
/*#include <string.h>*/

/*int main()*/
/*{*/
	/*int ori[25];*/
	/*for (int i = 0; i < 20; i++)*/
	/*{*/
		/*ori[i] = i + 1;*/
	/*}*/
	/*ft_memset(ori + 4, ori + 2, sizeof(int) * 17);*/
	/*for (int i = 0; i < 20; i++)*/
	/*{*/
		/*printf("%d ", ori[i]);*/
	/*}*/
/*}*/


/*[>* int main() <]*/
/*[>* { <]*/
/*[>*     char arr[10]; <]*/
/*[>*     ft_memset(arr, 'a', sizeof(arr)); <]*/
/*[>*     for (int i = 0; i < 10; i++) <]*/
/*[>*     { <]*/
/*[>*         printf("%c ", arr[i]); <]*/
/*[>*     } <]*/
/*[>*     printf("\n"); <]*/
/*[>*     memset(arr, 'a', sizeof(arr)); <]*/
/*[>*     for (int i = 0; i < 10; i++) <]*/
/*[>*     { <]*/
/*[>*         printf("%c ", arr[i]); <]*/
/*[>*     } <]*/
/*//	for (int i = 0; i < 10; i++)*/
/*//	{*/
/*//		printf("%c ", arr[i]);*/
/*//	}*/
/*//	memeset(arr, 'b', sizeof(arr));*/
/*//	for (int i = 0; i < 10; i++)*/
/*//	{*/
/*//		printf("%c ", arr[i]);*/
/*//	}*/
	/*return (0);*/
/*}*/
