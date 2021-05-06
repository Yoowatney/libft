/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:45:34 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/06 20:50:17 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>

void	ft_bzero(void *ptr, size_t size);
void	*ft_memccpy(void *dest, const void *source, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
void	*ft_memcpy(void *dest, const void *source, size_t num);
void	*ft_memmove(void *dest, const void *src, size_t num);
void	*ft_memset(void *ptr, int value, size_t num);

size_t ft_strlen(const char *str);

size_t ft_strlcpy(char *dest, char *src, unsigned long size);

//size_t ft_strlcpy(char *dst, const char *src, size_t num);


#endif
