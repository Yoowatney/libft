# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/05 18:32:37 by yoyoo             #+#    #+#              #
#    Updated: 2021/05/06 16:32:14 by yoyoo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
CFLAGS = -Wall -Wextra -Werror
CC = gcc
AR = ar rc
RM = rm -f

# BSRCS = $(wildcard *lst*.c)
SRCS = ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlen.c ft_strlcpy.c
# SRCS = $(filter-out $(BSRCS), $(wildcard *.c))
OBJS = $(SRCS:.c=.o)
# BOBJS = $(BSRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

bonus: $(BOBJS) $(OBJS)
	$(AR) $(NAME) $^

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BOBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re


#SRCS = *.c

#OBJS = ${SRCS:.c=.o}

#NAME = libft.a

#RM = rm -f

#CFLAGS = -Wall -Wextra -Wall

#.c.o :
	#gcc ${CFLAG} -c $< -o ${<:.c=.o}


#${NAME} : ${OBJS}
	#gcc -o ${NAME} ${OBJS}

#all : ${NAME}

#clean :
	#${RM} ${OBJS}

#fclean : clean
	#${RM} ${NAME}

#re : fclean all

