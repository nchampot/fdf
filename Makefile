SRC = reader.c main.c hook.c draw.c draw_seg.c projection.c

OBJ = $(SRC:.c=.o)

LIB = libft/

NAME = fdf

CC = clang

all : $(NAME)

$(NAME): $(OBJ)
		 @echo Libft compilation ...
		 	 @make -C $(LIB)
			 	 @echo Generating fdf
				 	 @$(CC) $(OBJ) $(LIB)libft.a -Wall -Wextra -Werror -lmlx -framework AppKit -framework OpenGL -o $(NAME)

re : fclean all

clean :
		@rm -f $(OBJ)
			@make clean -C $(LIB)

fclean : clean
		 @rm -f $(NAME)
		 	 @make fclean -C $(LIB)

test : all
	@./$(NAME) maps/10-2.fdf
	@make clean

norm :
	@norminette --CheckForbiddenSourceHeader $(LIB) $(SRC) fdf.h
