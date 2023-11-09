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
CC		=	gcc
CFLAGS		=	-Wall -Wextra -Werror
RM		=	rm -rf

SRC		=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_isprint.c ft_itoa.c ft_memcmp.c ft_memcpy.c ft_memchr.c \
			ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
			ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
			ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \

BONUS		=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \

OBJ		=	$(SRC:.c=.o)
BONUS_OBJ	=	$(BONUS:.c=.o)

# **************************************************************************** #
# COLORS

GREEN		= \033[0;32m
GREY		= \033[1;30m
PURPLE		= \033[0;93m
BLUE		= \033[0;94m
CYAN		= \033[0;36m
END_COLOR	= \033[0;39m

# **************************************************************************** #
# RULES

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(CYAN)[Library]$(END_COLOR) Creating libft.a"
	@ar rcs $(NAME) $(OBJ)
	@echo "$(GREEN)[Success]$(END_COLOR) Libft is ready !"

$(OBJ): $(SRC)
	@echo "$(BLUE)[Compiling]$(END_COLOR) $^"
	@$(CC) $(CFLAGS) -c $^

bonus: $(BONUS_OBJ)
	@echo "$(CYAN)[Library]$(END_COLOR) Creating libft.a"
	@ar rcs $(NAME) $(BONUS_OBJ)
	@echo "$(GREEN)[Success]$(END_COLOR) Libft with bonus is ready !"

$(BONUS_OBJ): $(BONUS)
	@echo "$(BLUE)[Compiling]$(END_COLOR) $^"
	@$(CC) $(CFLAGS) -c $^

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC) $(BONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJ) $(BONUS_OBJ)

clean:
	@$(RM) $(OBJ) $(BONUS_OBJ)
	@echo "$(GREY)[Clean]$(END_COLOR) Objects have been deleted !"

fclean:	clean
	@$(RM) $(NAME) a.out
	@echo "$(GREY)[Clean]$(END_COLOR) $(NAME) has been deleted !"

re: fclean all

.PHONY: all clean fclean re