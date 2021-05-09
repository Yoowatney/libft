/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 22:37:49 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/09 22:37:58 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *ptr1, const char *ptr2, size_t num)
{
	size_t i;

	i = 0;
	while (i < num)
	{
		if (*ptr1 != *ptr2)
			return (*(unsigned char *)ptr1 - *(unsigned char *)ptr2);

		else
		{
			i++;
			ptr1++;
			ptr2++;
		}
	}
	return (0);
}


/** int main() */
/** { */
/**     printf("%d\n", strncmp("\0", "\200", 6)); */
/**     printf("%d\n", ft_strncmp("\0", "\200", 6)); */
/**     char s = '\200'; */
/**     printf("%d", s); */
/** } */
