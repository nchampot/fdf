SRC = reader.c main.c hook.c draw.c draw_seg.c

NAME = fdf

all : $(NAME)

$(NAME) :
	@make re -C libft/
	@clang -Wall -Werror -Wextra $(SRC) libft/libft.a -lmlx -framework AppKit -framework OpenGL -o $(NAME)
	@echo $(NAME) made successfully

clean :
	@rm -f $(NAME)
	@make fclean -C libft/

re : clean all

test : re
	@./$(NAME)
	@make clean

norm :
	@norminette --CheckForbiddenSourceHeader libft/ $(SRC) fdf.h
