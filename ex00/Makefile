NAME = megaphone

CC = clang++
CFLAGS = -Wall -Wextra -Werror
FUNCTIONS = megaphone

OBJ = $(patsubst %,%.o,$(FUNCTIONS))
SRC = $(patsubst %,%.cpp,$(FUNCTIONS))

.PHONY: all clean fclean re

all: $(NAME)

obj_f: $(SRC)
	$(CC) CFLAGS = -Wall -Wextra -Werror -c $(SRC)

$(NAME): $(OBJ)
	$(CC) $(SRC) -o $(NAME)


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:		all clean fclean re