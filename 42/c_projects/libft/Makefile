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
			ft_strcpy.c \
			ft_strncpy.c \
			ft_strstr.c \
			ft_strcmp.c \
			ft_strncmp.c \
			ft_strupcase.c \
			ft_strlowcase.c \
			ft_strcapitalize.c \
			ft_isalpha.c \
			ft_str_is_alpha.c \
			ft_isdigit.c \
			ft_str_is_numeric.c \
			ft_str_is_lowercase.c \
			ft_str_is_printable.c \
			ft_strcat.c \
			ft_strncat.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_check_base.c \
			ft_putnbr_base.c \
			ft_inbase.c \
			ft_atoi_base.c \
			ft_isalnum.c \
			ft_isprint.c \
			ft_str_is_uppercase.c
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
			ft_strcpy.o \
			ft_strncpy.o \
			ft_strstr.o \
			ft_strcmp.o \
			ft_strncmp.o \
			ft_strupcase.o \
			ft_strlowcase.o \
			ft_strcapitalize.o \
			ft_isalpha.o \
			ft_str_is_alpha.o \
			ft_isdigit.o \
			ft_str_is_numeric.o \
			ft_str_is_lowercase.o \
			ft_str_is_printable.o \
			ft_strcat.o \
			ft_strncat.o \
			ft_strlcat.o \
			ft_strlcpy.o \
			ft_check_base.o \
			ft_putnbr_base.o \
			ft_inbase.o \
			ft_atoi_base.o \
			ft_isalnum.o \
			ft_isprint.o \
			ft_str_is_uppercase.o
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
