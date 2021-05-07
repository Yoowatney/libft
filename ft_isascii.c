/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:10:27 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/08 00:49:41 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/** int main() */
/** { */
/**     for (int i = 0; i < 129; i++) */
/**     { */
/**         if (isascii(i) == 0) */
/**             printf("i = %d\n", i); */
/**         if (ft_isascii(i) == 0) */
/**             printf("i = %d", i); */
/**     } */
/** } */
