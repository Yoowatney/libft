/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 19:13:37 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/08 00:50:09 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t num)
{
	unsigned long i;

	i = 0;
	if (!dest && !source)
		return (dest);
	while (i < num)
	{
		*((unsigned char *)dest + i) = *(unsigned char *)source;
		i++;
		source++;
	}
	return (dest);
}

/** int main() */
/** { */
/**     char *ptr1 = NULL; */
/**     char *ptr2 = NULL; */
/**     [> printf("%p\n", memcpy(NULL, NULL, 2)); <] */
/**     [> return (0); <] */
/**     printf("%p\n", ft_memcpy(ptr1, ptr2, 2)); */
/**     return (0); */
/**     int ori[25]; */
/**     for (int i = 0; i < 20; i++) */
/**     { */
/**         ori[i] = i + 1; */
/**     } */
/**     ft_memcpy(ori + 4, ori + 2, sizeof(int) * 17); */
/**     for (int i = 0; i < 20; i++) */
/**     { */
/**         printf("%d ", ori[i]); */
/**     } */
/** } */

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
