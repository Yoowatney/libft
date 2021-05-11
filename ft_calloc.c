/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:04:15 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/10 19:07:56 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *ret = malloc(size * nmemb);

	if (!ret)
		return (0);
	ft_bzero(ret, nmemb * size);
	return (ret);
	/** unsigned char *s = malloc(size * nmemb); */
	/** size_t i; */
	/**  */
	/** i = 0; */
	/** while (i < nmemb * size) */
	/** { */
	/**     s[i] = '\0'; */
	/**     i++; */
	/** } */
	/** return ((void *) s); */
}
