/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:13:53 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/11 22:36:35 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char	temp[num + 1];
	size_t			i;

	i = 0;
	if ((!dest && !src))
		return (0);
	while (i < num)
	{
		temp[i] = *((unsigned char *)src + i);
		i++;
	}
	i = 0;
	while (i < num)
	{
		*((unsigned char *)dest + i) = temp[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char str1[20] = "1234";
	char str2[20] = "1234";
	char *ss =(char *)malloc(sizeof(char) * 2);
	char *ptr1 = ss;
	char *ptr2 = ss;

	printf("ptr1 : %p\n", ptr1);
	printf("ptr2 : %p\n", ptr2);
	free(ss);

	ptr1 = NULL;
	printf("ptr1 : %p\n", ptr1);
	printf("ptr2 : %p\n", ptr2);
	return (0);

	printf("%p\n", ft_memmove(str2, "128 Mo", 6));
	printf("s : %s\n", str2);
	printf("%p\n", memmove(str1, "128 Mo", 6));
	printf("s : %s\n", str1);
	return (0);
}
