/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 19:09:15 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/07 19:09:16 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t num)
{
	unsigned long i;

	i = 0;

	while (i < num)
	{
		*(unsigned char *)dest = *(unsigned char *)source;
		i++;
		dest++;
		/** printf("dest : %p\n", dest); */
		source++;
	}
	return (dest);
}

int main()
{
	char *ptr1;
	char *ptr2;

	/** memcpy(ptr1, ptr2, 2); */
	printf("%p\n", ptr1);
	return (0);
	printf("%p\n", memcpy(ptr1, ptr2, 2));
	int ori[25];
	for (int i = 0; i < 20; i++)
	{
		ori[i] = i + 1;
	}
	ft_memcpy(ori + 4, ori + 2, sizeof(int) * 17);
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", ori[i]);
	}
}

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
