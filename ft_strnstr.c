/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 20:45:07 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/12 17:25:03 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*put_null(const char *str, size_t len)*/
/*{*/
	/*char	ret[400];*/
	/*size_t	i;*/

	/*i = 0;*/
	/*while (i < len - 2)*/
	/*{*/
		/*ret[i] = *str;*/
		/*str++;*/
		/*i++;*/
	/*}*/
	/*ret[len - 1] = '\0';*/
	/*return (ret);*/
/*}*/

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	to_find_len;
	size_t	i;
	int		sign;
	/*char	*haystack;*/

	/*haystack = put_null(str, len);*/
	to_find_len = ft_strlen(to_find);
	if (to_find_len > len)
		return (0);
	if (*to_find == '\0')
		return ((char *)str);
	while (*str && len--)
	{
		i = 0;
		sign = 1;
		while (i < len && str[i] != str[len - 1])
		{
			if (*(str + i) != *(to_find + i))
			{
				sign = 0;
				break ;
			}
			i++;
		}
		if (sign == 1)
			return ((char *)str);
		str++;
	}
	return (0);
}
/*#include <stdio.h>*/
/*#include <string.h>*/

/*int main(void)*/
/*{*/
	/*printf("%s\n", strnstr("124566789765523", "23", 30));*/
	/*printf("%s\n", ft_strnstr("123", "23", 2));*/
	
	/*return (0);*/
/*}*/
	/*size_t	find_len;*/
	/*size_t	i;*/
	/*size_t	j;*/
	/*size_t	k;*/
	
	/*len++;*/
	/*find_len = ft_strlen(to_find);*/
	/*i = 0;*/
	/*while (str[i])*/
	/*{*/
		/*j = 0;*/
		/*while (j < find_len)*/
		/*{*/
			/*k = i;*/
			/*if (to_find[j] == str[k] && j != find_len - 1)*/
			/*{*/
				/*k++;*/
				/*j++;*/
			/*}*/
			/*else if (to_find[j] != str[k])*/
			/*{*/
				/*k = 0;*/
				/*break ;*/
			/*}*/
			/*else if (to_find[j] == str[k] && j == find_len - 1)*/
			/*{*/
				/*return ((char *)str + i);*/
			/*}*/
		/*}*/
		/*i++;*/
	/*}*/
	/*return (NULL);*/
