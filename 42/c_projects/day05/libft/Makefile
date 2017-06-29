NAME = libft.a
FILESC =	ft_atoi.c \
			ft_is_negative.c \
			ft_is_prime.c \
			ft_iterative_factorial.c \
			ft_iterative_power.c \
			ft_putchar.c \
			ft_putnbr.c \
			ft_putstr.c \
			ft_sqrt.c \
			ft_strlen.c \
			ft_strrev.c \
			ft_swap.c \
			ft_strcpy.c
FILESO =	ft_atoi.o \
			ft_is_negative.o \
			ft_is_prime.o \
			ft_iterative_factorial.o \
			ft_iterative_power.o \
			ft_putchar.o \
			ft_putnbr.o \
			ft_putstr.o \
			ft_sqrt.o \
			ft_strlen.o \
			ft_strrev.o \
			ft_swap.o \
			ft_strcpy.o
HEADERS = includes
all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I $(HEADERS) -c $(FILESC)
	ar rc $(NAME) $(FILESO)
	ranlib $(NAME)

clean:
	rm -f $(FILESO)

fclean: clean
	rm -f $(NAME)

re: fclean all
