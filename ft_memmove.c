/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:13:53 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/06 16:14:03 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char temp[num + 1];
	unsigned long i;

	i = 0;
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
