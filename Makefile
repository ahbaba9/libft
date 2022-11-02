CC=cc
CFLAGS= -Wall -Wextra -Werror
CFILES=$(wildcard ft_*.c)
OBJ = $(CFILES:.c=.o)
NAME = libft.a
LIBC = ar -rc
RM = rm -rf


all: ${NAME}

${NAME}: ${OBJ}
	${LIBC} ${NAME} ${OBJ}

.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}
re: clean fclean all
