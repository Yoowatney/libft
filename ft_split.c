/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 22:31:07 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/15 19:31:20 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_strncpy(char *src, int n, char *dest)
{
	int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	dest[i] = 0;
}

char	**ft_split(char *str, char c)
{
	char	**ret;
	char	*first;
	int		row;

	row = 0;
	if (!str)
		return (0);
	if (!(ret = (char **)malloc(sizeof(char *) * 4096)))
		return (NULL);
	while (*str)
	{
		if (*str == c)
			str++;
		else
		{
			first = str;
			while (*str != c && *str)
			{
				str++;
			}
			ret[row] = (char *)malloc(sizeof(char) * (str - first + 1));
			ft_strncpy(first, str - first, ret[row]);
			row++;
		}
	}
	ret[row] = 0;
	return (ret);
}
