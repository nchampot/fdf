# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 11:47:22 by dtortera          #+#    #+#              #
#    Updated: 2015/02/16 17:10:16 by dtortera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Werror
ALL_CFLAGS = -Wall -Wextra $(CFLAGS)

INC_DIR = inc
CPPFLAGS = -iquote $(INC_DIR)

OBJS_DIR = objs
SRCS_DIR = srcs
VPATH = srcs/io\
		srcs/lst\
		srcs/mem\
		srcs/misc\
		srcs/str

F_IO = ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd get_next_line
F_LST = ft_lstadd ft_lstdel ft_lstdelone ft_lstiter ft_lstmap ft_lstnew
F_MEM = ft_bzero ft_memalloc ft_memccpy ft_memchr ft_memcmp ft_memcpy\
		ft_memdel ft_memmove ft_memset
F_MISC = ctypes1 ctypes2 ctypes3 ft_errno libft_ctypes
F_STR = ft_atoi ft_itoa ft_strcat ft_strchr ft_strclr\
		ft_strcmp ft_strcpy ft_strdel ft_strdup ft_strequ ft_striter\
		ft_striteri ft_strjoin ft_strlcat ft_strlen ft_strmap ft_strmapi\
		ft_strncat ft_strncmp ft_strncpy ft_strnequ ft_strnew ft_strnstr\
		ft_strrchr ft_strsplit ft_strstr ft_strsub ft_strtrim\
		ft_tolower ft_toupper

SRCS = $(addprefix io/, $(addsuffix .c, $(F_IO)))
SRCS += $(addprefix lst/, $(addsuffix .c, $(F_LST)))
SRCS += $(addprefix mem/, $(addsuffix .c, $(F_MEM)))
SRCS += $(addprefix misc/, $(addsuffix .c, $(F_MISC)))
SRCS += $(addprefix str/, $(addsuffix .c, $(F_STR)))

OBJS = $(addprefix $(OBJS_DIR)/, $(notdir $(SRCS:.c=.o)))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@echo "AR\t$(NAME) $(OBJS_DIR)/*.o"
	@$(AR) rcus $(NAME) $(OBJS)

$(OBJS_DIR)/%.o: %.c $(INC_DIR)/libft.h
	@echo "CC\t$<"
	@$(CC) $(ALL_CFLAGS) $(CPPFLAGS) -c $< -o $@

clean:
	@echo "RM\t$(OBJS_DIR)/*.o"
	@$(RM) $(OBJS)

fclean: clean
	@echo "RM\t$(NAME)"
	@$(RM) $(NAME)

re: fclean all

$(OBJS): | $(OBJS_DIR)

$(OBJS_DIR):
	mkdir $(OBJS_DIR)
