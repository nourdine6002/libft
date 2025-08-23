NAME = libft.a
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
INCLUDE = -Iinclude
GCC = gcc
GFALGE = -Wall -Wextra -Werror $(INCLUDE)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o : %.c include/libft.h
	$(GCC) $(GFALGE) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean :
	rm -rf $(NAME)

re :
	fclean all

.PHONY: all clean fclean re