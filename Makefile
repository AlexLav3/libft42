NAME = libft.a
CFLAGS = -Wall -Werror -Wextra -c -o
SOURCES = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c  ft_memmove.c ft_memset.c ft_strchr.c \
ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
ft_split.c ft_strjoin.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c
OBJECTS = $(SOURCES:.c=.o)

${NAME} : ${OBJECTS}
	${CFLAGS} ${NAME} ${OBJECTS}

all:${OBJECTS}
	ar rcs ${NAME} ${OBJECTS}

clean:
	rm $(OBJECTS)

fclean: clean
	rm ${NAME}

re: fclean all
