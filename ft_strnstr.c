/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 20:45:07 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/12 20:42:25 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char* ft_strnstr(const char* str, const char* to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*to_find == '\0')
		return ((char *) str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (i + j < len)
		{
			if (str[i + j] != to_find[j])
				break ;
			j++;
			if (to_find[j] == '\0')
				return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}

/*char	*ft_strnstr(const char *str, const char *to_find, size_t len)*/
/*{*/
	/*size_t	to_find_len;*/
	/*size_t	i;*/
	/*int		sign;*/

	/*to_find_len = ft_strlen(to_find);*/
	/*if (*to_find == '\0')*/
		/*return ((char *)str);*/
	/*while (*str && len--)*/
	/*{*/
		/*i = 0;*/
		/*sign = 1;*/
		/*while (i < to_find_len )*/
		/*{*/
			/*if (*(str + i) != *(to_find + i))*/
			/*{*/
				/*sign = 0;*/
				/*break ;*/
			/*}*/
			/*i++;*/
		/*}*/
		/*if (sign == 1)*/
			/*return ((char *)str);*/
		/*str++;*/
	/*}*/
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
