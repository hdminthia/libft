# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 15:46:46 by hdo-minh          #+#    #+#              #
#    Updated: 2021/11/30 16:08:00 by hdo-minh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#LIBRARY NAME
NAME = libft.a

#DIRECTOY
SRC_DIR = srcs
INC_DIR = includes
OBJ_DIR = objs
PUSH_DIR = ./libft

#DIRECTORIES PATH
INCLUDES = ${INC_DIR}
SRCS = 

#COMPILATION
CC = clang
CFLAGS = -Wall -Wextra -Werror -g
#CFLAGS += -pedantic -03 -march=native
#CFLAGS += -flto
#CFLAGS += -fsanitize=address -fno-omit-frame-pointer
#CFLAGS +=
PRECOMPILE = @mkdir -p $(dir $@)
POSTCOMPILE = 

#FILES.c .o .h
include srcs.mk

OBJS = $(pathsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))
INC = $(INC_DIR)/libft.h

#PROGRESS BAR
T = $(words $(OBJ))
N = 0
C = $(words $N)$(eval N := x $N)
ECHO = "[`expr $C '*' 100 / $T`%]"

#COLORS
_RED=\033[0;31m
_GREEN=\x1b[0;32m
_YELLOW=\033[0;33m
_END=\033[0m

all :
	@$(MAKE) $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(PRECOMPILE)
	@$(CC) $(CFLAGS) -c -o $@ $<
	@printf "%-60b\r" "$(ECHO) $(_RED) Compiling... $(_END)"
	@$(POSTCOMPILE)

$(NAME) : $(OBJ) $(INC)
	@ar rcs $(NAME) $(OBJ)
cpy :
	#@cp -rf Makefile $(PUSH_DIR)
	#@cp -rf srcs1.mk $(PUSH_DIR)
	#@cp -rf $(INC_DIR)/libft_rendu.h $(PUSH_DIR)
	@cp -rf $(SRC_DIR)/ctype/*.c $(PUSH_DIR)
	@cp -rf $(SRC_DIR)/string/*.c $(PUSH_DIR)
	@cp -rf $(SRC_DIR)/stdio/*.c $(PUSH_DIR)
	@cp -rf $(SRC_DIR)/stdlib/*.c $(PUSH_DIR)
	@cp -rf $(SRC_DIR)/list/*.c $(PUSH_DIR)
	#@mv $(PUSH_DIR)/libft_rendu.h $(PUSH_DIR)/libft.h

ccpy :
	@/bin/rm -rf $(PUSH_DIR)/*.c
	#@/bin/rm -rf $(PUSH_DIR)/*.h
	#@/bin/rm -rf $(PUSH_DIR)/Makefile
	#@/bin/rm -rf $(PUSH_DIR)/*.mk

norme : clean
	norminette -R CheckForbiddenSourceHeader $(SRC)
	norminette -R CheckDefine $(INC_DIR)

clean :
	@/bin/rm -rf $(OBJ_DIR)
	@echo "$(_YELLOW)Object files deleted.$(_END)"

fclean : clean
	@rm -f $(NAME)
	@echo "$(_YELLOW)$(NAME) deleted.$(_END)"

re : 
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean re
.PRECIOUS: srcs.mk author
