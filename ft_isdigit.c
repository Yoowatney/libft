/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 20:56:01 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/08 01:18:58 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/** int main() */
/** { */
/**     int c; */
/**  */
/**     c = '9'; */
/**     printf("%d\n", isdigit(c)); */
/**     printf("%d\n", ft_isdigit(c)); */
/** } */
