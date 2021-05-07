/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 01:59:05 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/08 02:03:42 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/** int main() */
/** { */
/**     for (int i = 0; i < 127; i++) */
/**     { */
/**         if (ft_isprint(i) == 0) */
/**             printf("ft : %d\n", i); */
/**         if (isprint(i) == 0) */
/**             printf("c  : %d\n", i); */
/**     } */
/** } */
