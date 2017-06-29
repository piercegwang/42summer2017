NAME = libft.a
FILESC = ft_putchar.c ft_putnbr.c ft_putstr.c ft_strlen.c ft_print_intarray.c ft_swap.c ft_strrev.c ft_atoi.c
FILESO = ft_putstr.o ft_putnbr.o ft_putstr.o ft_strlen.o ft_print_intarray.o ft_swap.o ft_strrev.o ft_atoi.o
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
