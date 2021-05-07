/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:51:56 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/06 20:14:06 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	/*size_t i;*/

	/*unsigned char *ret;*/

	/*ret = (unsigned char *)s;*/
	/*while (n--)*/
	/*{*/
	/*if (*ret == (unsigned char)c)*/
	/*return (ret);*/
	/*ret++;*/
	/*}*/
	/*return (0);*/

	i = 0;
	while (*(unsigned char *)s != (unsigned char)c && i < n)
	{
		s++;
		i++;
	}
	if (i == n)
		return (0);
	return ((void *)s);
}

/*int main(void)*/
/*{*/
	/*int s[7] = {257, 128, 1, -1, 0, -2, 2};*/

	/*int  *ptr1;*/
	/*int c = -256;*/
	/*size_t i = 7;*/
	/*printf("array first casting to unsigned chr = %d\n", (unsigned char)(257));*/
	/*printf("                         signed chr = %d\n", (signed char)(257));*/
	/*printf("casting to unsigned chr = %d\n", (unsigned char)(-256));*/
	/*printf("casting to signed chr   = %d\n", (signed char)(-256));*/
	/*[>return (0);<]*/
	/*ptr1 = memchr(s, c, i);*/

	/*printf("s : %p\n", s);	*/
	/*printf("s : %p\n", s + 1);	*/
	/*printf("c : %p\n", ptr1);*/
	/*printf("d : %d\n", *ptr1);*/
	/*int *ptr2;*/
	/*ptr2 = ft_memchr(s, c, i);*/

	/*printf("ft : %p\n", ptr2);*/
	/*printf("d : %d\n", *ptr2);*/
/*}*/
