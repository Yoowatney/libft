/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 22:31:07 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/17 22:47:39 by yoyoo            ###   ########.fr       */
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

static	void	one_free(char **ret, int row)
{
	int i;

	i = 0;
	while (i < row)
		free(ret[i]);
	return ;
}

static	int		split_sub(char **ret, char *str, char c, int row)
{
	char *first;

	while (*str)
	{
		if (*str == c)
			str++;
		else
		{
			first = str;
			while (*str != c && *str)
				str++;
			ret[row] = (char *)malloc(sizeof(char) * (str - first + 1));
			if (!ret[row])
			{
				one_free(ret, row);
				return (0);
			}
			ft_strncpy(first, str - first, ret[row]);
			row++;
		}
	}
	ret[row] = 0;
	return (1);
}

int				count_c(char *str, int c)
{
	int i;

	i = 0;
	while (*str != c && *str)
	{
		str++;
		while (*str == c)
		{
			str++;
		}
		if (*str == c)
			i++;
	}
	return (i);
}

char			**ft_split(char const *str, char c)
{
	char	**ret;
	int		row;

	count_c((char *)str, c);
	if (!str)
		return (0);
	row = 0;
	if (!(ret = (char **)malloc(sizeof(char *) * (count_c((char *)str, c) + 1))))
		return (NULL);
	if (split_sub(ret, (char *)str, c, row) == 0)
	{
		free(ret);
		return (NULL);
	}
	return (ret);
}
