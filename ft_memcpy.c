/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/05/07 19:09:15 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/07 19:09:16 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
=======
/*   Created: 2021/05/06 13:42:17 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/06 15:13:55 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

>>>>>>> 148165ef79daa98e72d222e6ba740ba20a100e86
#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t num)
{
	unsigned long i;

	i = 0;
	while (i < num)
	{
<<<<<<< HEAD
		*(unsigned char *)dest = *(unsigned char *)source;
=======
		*((unsigned char *)dest + i) = *(unsigned char *)source;
>>>>>>> 148165ef79daa98e72d222e6ba740ba20a100e86
		i++;
		source++;
	}
	return (dest);
}
<<<<<<< HEAD

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
=======
>>>>>>> 148165ef79daa98e72d222e6ba740ba20a100e86
