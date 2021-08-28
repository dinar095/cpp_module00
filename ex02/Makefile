NAME = account

CC = clang++
CFLAGS = -Wall -Wextra -Werror
FUNCTIONS = Account tests

OBJ = $(patsubst %,%.o,$(FUNCTIONS))
SRC = $(patsubst %,%.cpp,$(FUNCTIONS))
HEADER = Account.hpp

.PHONY: all clean fclean re

all: $(NAME)

obj_f: $(SRC)
	$(CC) CFLAGS = -Wall -Wextra -Werror -c $(SRC)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(SRC) -o $(NAME)


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re