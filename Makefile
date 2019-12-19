# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: basylbek <basylbek@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/11 18:03:01 by vsanta            #+#    #+#              #
#    Updated: 2019/12/18 19:06:15 by basylbek         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME		= libft.a

INC_PATH	= ./includes/
SRC_PATH 	= ./src/
OBJ_DIR		= ./obj/

HEADER_NAME	= libft.h

SRC_NAME	= ft_atoi.c ft_bzero.c ft_count_word.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_isspace.c ft_itoa.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
ft_memdel.c ft_memmove.c ft_memset.c ft_numlen.c ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c \
ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c \
ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c \
ft_strlcat.c ft_strlen.c ft_strlen_c.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c \
ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c \
ft_tolower.c ft_toupper.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c get_next_line.c \
ft_itoa_base.c ft_numlen_base.c ft_itoa_e.c ft_itoa_float.c ft_itoa_precision.c ft_pow.c ft_free_array.c ft_abs.c


OBJ_NAME	= $(SRC_NAME:.c=.o)


SRC			= $(addprefix $(SRC_PATH), $(SRC_NAME))
HEADER		= $(addprefix $(INC_PATH), $(HEADER_NAME))
OBJ			= $(addprefix $(OBJ_DIR), $(OBJ_NAME))


FLAGS 		= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	@ar rc $(NAME) $(OBJ)

$(OBJ_DIR):
	@mkdir -p obj

$(OBJ_DIR)%.o: $(SRC_PATH)%.c $(HEADER)
	@gcc -c -I $(INC_PATH) $(FLAGS) $< -o $@

clean:
	@/bin/rm -rf $(OBJ_DIR)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all