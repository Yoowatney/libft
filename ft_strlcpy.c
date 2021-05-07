/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:28:31 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/06 20:50:48 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

/*size_t	ft_strlen(const char *str)*/
/*{*/
	/*size_t i;*/
	
	/*i = 0;*/
	/*while (str[i] != '\0')*/
	/*{*/
		/*i++;*/
	/*}*/
	/*return (i);*/
/*}*/

/*size_t ft_strlcpy(char *dst, const char *src, size_t num)*/
/*{*/
	/*size_t i;*/
	/*size_t ret;*/

	/*i = 0;*/
	/*ret = ft_strlen(src);*/
	/*while (i < num - 1)*/
	/*{*/
		/*dst[i] = *src;*/
		/*src++;*/
		/*i++;*/
	/*}*/
	/*dst[i] = '\0';*/
	/*return (ret);*/
/*}*/

size_t ft_strlcpy(char *dest, char *src, unsigned long size)
{
	size_t i;

	i = 0;
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
		dest[i] = 0;
	while (src[i])
		i++;
	return (i);
}


/*int main(void)*/
/*{*/
	/*char str1[10];*/
	/*char str2[10];*/
	/*char *ptr = NULL;*/

	/*printf("%ld\n", strlcpy(str1, ptr, 0));*/
	/*printf("c  : %s\n", str1);*/
	/*printf("%ld\n", ft_strlcpy(str2, ptr, 0));*/
	/*printf("ft : %s\n", str2);*/
	/*return (0);*/
/*}*/
