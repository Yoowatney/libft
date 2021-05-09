/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 16:38:48 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/09 23:41:38 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

/** char	*ft_strchr(char *s, int c) */
/** { */
/**     size_t	i; */
/**     size_t	s_len; */
/**  */
/**     i = 0; */
/**     s_len = strlen(s); */
/**     while (*(unsigned char *)s != c && *s != '\0') */
/**     { */
/**         s++; */
/**         i++; */
/**     } */
/**     if (i == s_len && c != '\0') */
/**         return (NULL); */
/**     return ((char *)s); */
/** } */

char	*ft_strchr(char *str, int c)
{
	size_t	str_len;
	size_t	i;

	str_len = ft_strlen(str);
	i = 0;
	while (1)
	{
		if (*str == c)
			return (str);
		if (i == str_len)
			break ;
		str++;
		i++;
	}
	return (NULL);
}

/** int main() */
/** { */
/**     char str[20] = "1234"; */
/**     printf("%p\n", strchr(str, '\0')); */
/**     printf("%p\n", ft_strchr(str, '\0')); */
/**     printf("%p\n", str); */
/** } */
