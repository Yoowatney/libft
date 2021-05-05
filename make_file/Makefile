SRCS = main.c hello.c

OBJS = ${SRCS:.c=.o}

NAME = hello

cc = gcc

RM = rm -f
CFLAGS = -Wall -Wextra -Werror
.c.o : # OBJS와 동일한 명령어
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	gcc -o ${NAME} ${OBJS}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}
re : fclean all  # 파일 삭제후 재생성

.PHONY : all clean fclean re
# let :
#     cc -o let main.c hello.c
