/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:53:59 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/06 15:53:51 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned	long	ft_strlen(const char *str)
{
	unsigned long i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
