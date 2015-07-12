SRC = reader.c main.c hook.c draw.c

NAME = fdf

all : $(NAME)

$(NAME) :
	@make re -C libft/
	@gcc -Wall -Werror -Wextra $(SRC) libft/libft.a minilibx/libmlx.a -lX11 -lm -lXext -o $(NAME)
	@echo $(NAME) made successfully

clean :
	@rm -f $(NAME)

re : clean all

test : re
	@./$(NAME)
	@make clean

norm :
	@norminette --CheckForbiddenSourceHeader libft/ $(SRC) fdf.h
