# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    srcs.mk                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 15:50:11 by hdo-minh          #+#    #+#              #
#    Updated: 2021/11/29 14:50:18 by hdo-minh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#STDIO
SRC += srcs/stdio/ft_putchar_fd.c
SRC += srcs/stido/ft_putstr_fd.c
SRC += srcs/stdio/ft_putendl_fd.c
SRC += srcs/stdio/ft_putnbr_fd.c

#CTYPE
SRC += srcs/ctype/ft_isalpha.c
SRC += srcs/ctype/ft_isdigit.c
SRC += srcs/ctype/ft_isalnum.c
SRC += srcs/ctype/ft_isascii.c
SRC += srcs/ctype/ft_isprint.c
SRC += srcs/ctype/ft_toupper.c
SRC += srcs/ctype/ft_tolower.c

#STRING
SRC += srcs/string/ft_strlen.c
SRC += srcs/string/ft_memset.c
SRC += srcs/string/ft_bzero.c
SRC += srcs/string/ft_memcpy.c
SRC += srcs/string/ft_memmove.c
SRC += srcs/string/ft_strlcpy.c
SRC += srcs/string/ft_strlcat.c
SRC += srcs/string/ft_strlcat.c

SRC += srcs/string/ft_substr.c
SRC += srcs/string/ft_strjoin.c
SRC += srcs/string/ft_strtrim.c
SRC += srcs/string/ft_split.c
SRC += srcs/

#STDLIB
SRC += srcs/stdlib/ft_itoa.c

#LIST
SRC += srcs/list/ft_lstnew.c
SRC += srcs/list/ft_lstadd_front.c
SRC += srcs/list/ft_lstsize.c
SRC += srcs/list/ft_lstlast.c
SRC += srcs/list/ft_lstadd_back.c
SRC += srcs/list/ft_lstdelone.c
SRC += srcs/list/ft_lstclear.c
SRC += srcs/list/ft_lstiter.c
SRC += srcs/list/ft_lstmap.c
