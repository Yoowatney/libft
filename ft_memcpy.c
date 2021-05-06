/*#include <stdio.h>*/
/*#include <string.h>*/
#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t num)
{
	unsigned long i;

	i = 0;

	while (i < num)
	{
		*(char *)dest = *(char *)source;
		i++;
		dest++;
		/** printf("dest : %p\n", dest); */
		source++;
	}
	return (dest);
}

/*int main()*/
/*{*/
	/*int ori[25];*/
	/*for (int i = 0; i < 20; i++)*/
	/*{*/
		/*ori[i] = i + 1;*/
	/*}*/
	/*ft_memcpy(ori + 4, ori + 2, sizeof(int) * 17);*/
	/*for (int i = 0; i < 20; i++)*/
	/*{*/
		/*printf("%d ", ori[i]);*/
	/*}*/
/*}*/

/** int main() */
/** { */
/**     int dest[10]; */
/**     int source[8] = {1,2,3,4,5,6,7,8}; */
/**     ft_memcpy(dest, source, sizeof(source)); */
/**     for (int i = 0; i < 10; i++) */
/**     { */
/**         printf("%d ", dest[i]); */
/**     } */
/** } */
