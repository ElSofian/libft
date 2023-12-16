# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: soelalou <soelalou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/28 01:22:10 by soelalou          #+#    #+#              #
#    Updated: 2023/11/09 17:48:49 by soelalou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# VARIABLES

NAME		=	libft.a
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -fPIC
RM			=	rm -rf

SRC			=	char/ft_isalnum.c char/ft_isalpha.c char/ft_isascii.c char/ft_isdigit.c char/ft_isprint.c \
				char/ft_occ.c char/ft_putchar_fd.c char/ft_putendl_fd.c char/ft_putstr_fd.c char/ft_puthex_fd.c char/ft_tolower.c char/ft_toupper.c \
				int/ft_atoi.c int/ft_itoa.c int/ft_nbrlength.c int/ft_putnbr_fd.c int/ft_putunbr.c \
				lst/ft_lstadd_back.c lst/ft_lstadd_front.c lst/ft_lstclear.c lst/ft_lstdelone.c lst/ft_lstiter.c \
				lst/ft_lstlast.c lst/ft_lstmap.c lst/ft_lstnew.c lst/ft_lstsize.c \
				mem/ft_bzero.c mem/ft_memchr.c mem/ft_memcmp.c mem/ft_memcpy.c mem/ft_memmove.c mem/ft_memset.c \
				others/ft_calloc.c others/ft_freetab.c others/ft_printf.c others/ft_putaddr_fd.c others/get_next_line.c \
				str/ft_split.c str/ft_strcat.c str/ft_strchr.c str/ft_strcmp.c str/ft_strcpy.c str/ft_strdup.c str/ft_striteri.c \
				str/ft_strjoin.c str/ft_strlcat.c str/ft_strlcpy.c str/ft_strlen.c str/ft_strmapi.c str/ft_strncmp.c str/ft_strnstr.c \
				str/ft_strrchr.c str/ft_strtrim.c str/ft_substr.c

OBJ_DIR		=	bin
OBJ			=	$(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

# **************************************************************************** #
# COLORS

GREEN		=	\033[0;32m
GREY		=	\033[1;30m
PURPLE		=	\033[0;93m
BLUE		=	\033[0;94m
CYAN		=	\033[0;36m
END_COLOR	=	\033[0;39m

# **************************************************************************** #
# RULES

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "$(CYAN)[Library]$(END_COLOR) Libft is ready !"

$(OBJ): $(OBJ_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ_DIR) $(BONUS_OBJ)

fclean:
	@$(RM) $(OBJ_DIR) $(BONUS_OBJ)
	@$(RM) $(NAME) a.out bin

re: fclean all

.PHONY: all clean fclean re