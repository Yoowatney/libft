SRCS = main.c hello.c

OBJS = ${SRCS:.c=.o}

all: ${OBJS}
	gcc -o all ${OBJS}
