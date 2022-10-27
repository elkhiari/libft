
NAME	:= libft.a
CC		:= cc
CFLAGS	:= -Wall -Wextra -Werror
FILES	:= $(shell find . -type f -name "ft_*.c")
OBJ		:= $(FILES:%.c=%.o)


all: $(NAME)

$(NAME) : $(OBJ)
			ar -rcs $(NAME) $(OBJ)

$(NAME) : $(OBJ)
			ar -rcs $(NAME) $(OBJ)

clean:
			rm -f *.o

fclean: clean
			rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re