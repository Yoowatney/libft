/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:45:34 by yoyoo             #+#    #+#             */
/*   Updated: 2021/05/11 15:16:57 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_bzero(void *ptr, size_t size);
void	*ft_calloc(size_t nmemb, size_t size);

int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isalnum(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

void	*ft_memccpy(void *dest, const void *source, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
void	*ft_memcpy(void *dest, const void *source, size_t num);
void	*ft_memmove(void *dest, const void *src, size_t num);
void	*ft_memset(void *ptr, int value, size_t num);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);


size_t ft_strlcpy(char *dest, char *src, unsigned long size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t ft_strlen(const char *str);
char	*ft_strchr(char *str, int c);
int		ft_strncmp(const char *ptr1, const char *ptr2, size_t num);
char	*ft_strrchr(char *str, int c);




#endif
