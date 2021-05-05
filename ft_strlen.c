/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:53:59 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/05 18:54:00 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
/*#include <string.h>*/
#include "libft.h"

unsigned long ft_strlen(const char *str)
{
	unsigned long i;

	i = 0;
	while (str[i] != '\0')
	{
		 i++;
	} 
	return (i);
}

/*int main()*/
/*{*/
	/*char str[] = "123456789";*/

	/*printf("%ld\n", strlen(str));*/
	/*printf("%ld ", ft_strlen(str));*/
/*}*/
