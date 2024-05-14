NAME = so_long

LIBFT_DIR = Libft/

SRC_DIR = src/

SRC_FILES = src/main.c

CFLAGS = -Wextra -Wall -Werror -g

OBJ = $(SRC_FILES:.c=.o)

MAKEFLAGS += -s

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) all -C $(LIBFT_DIR)
	gcc $(CFLAGS) $(OBJ) -L$(LIBFT_DIR) -lft -o $(NAME)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@rm -rf $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re