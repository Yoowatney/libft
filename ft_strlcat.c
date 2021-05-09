/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 16:09:42 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/09 16:09:43 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t dst_len;

	i = 0;
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + ft_strlen(src));
	while (i < (size - dst_len - 1) && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + ft_strlen(src));
}
/**  */
/** int main() */
/** { */
/**     char str[20] = "12"; */
/**     ft_strlcat("12", "34", 4); */
/**     printf("%s",str); */
/** } */
