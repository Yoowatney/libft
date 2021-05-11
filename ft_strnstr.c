/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 20:45:07 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/11 21:05:21 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find)
{
	size_t	find_len;
	size_t	i;
	size_t	j;
	size_t	k;
	
	find_len = ft_strlen(to_find);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (j < find_len)
		{
			k = i;
			if (to_find[j] == str[k] && j != find_len - 1)
			{
				k++;
				j++;
			}
			else if (to_find[j] != str[k])
			{
				k = 0;
				break ;
			}
			else if (to_find[j] == str[k] && j == find_len - 1)
			{
				return ((char *)str + i);
			}
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
	printf("%s\n", ft_strnstr("aabcde", "abc"));
	return (0);
}
