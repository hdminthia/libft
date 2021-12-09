# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 15:46:46 by hdo-minh          #+#    #+#              #
#    Updated: 2021/12/01 09:00:29 by hdo-minh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#CTYPE
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c
SRCS += ft_toupper.c ft_tolower.c

#STDLIB
SRCS += ft_atoi.c ft_itoa.c ft_calloc.c

#STDIO
SRCS += ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

#STRING
SRCS += ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c
SRCS += ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c
SRCS += ft_memchr.c ft_memcmp.c ft_strnstr.c ft_strdup.c

SRCS += ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c
SRCS += ft_striteri.c

#LIST
SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c
SRCS_BONUS += ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c
SRCS_BONUS += ft_lstmap.c

NAME = libft.a

CC = clang
CFLAGS = -Wall -Wextra -Werror

HEADER	= libft.h

OBJ_DIR	= objects

OBJ = $(SRCS:%.c=$(OBJ_DIR)/%.o)
OBJ_BONUS = $(SRCS_BONUS:%.c=$(OBJ_DIR)/%.o)

$(OBJ_DIR)/%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ)

bonus : $(NAME) $(OBJ_DIR) $(OBJ_BONUS) $(HEADER)
	ar rcs $(NAME) $(OBJ_BONUS)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY:	all clean fclean re bonus
