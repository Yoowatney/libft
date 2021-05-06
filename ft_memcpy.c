/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:42:17 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/06 15:13:55 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t num)
{
	unsigned long i;

	i = 0;
	while (i < num)
	{
		*((unsigned char *)dest + i) = *(unsigned char *)source;
		i++;
		source++;
	}
	return (dest);
}
