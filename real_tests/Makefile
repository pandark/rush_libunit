# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/02 18:45:43 by ntoniolo          #+#    #+#              #
#    Updated: 2017/11/26 21:55:07 by apachkof         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libcobaye.a

CC ?= gcc

CFLAGS = -Wall -Werror -Wextra -g

INC_FILES = includes/cobaye.h

INC = includes/

OBJ_DIR = objs/

SRC = srcs/co_itoa.c \
	  srcs/co_strlen.c \
	  srcs/co_strlcat.c \
	  srcs/co_putnbr.c 

OBJET = $(SRC:.c=.o)

#.PHONY de $(NAME) = Pas de message, car Verification
.PHONY: all, clean, fclean, re, test

all: $(NAME)

$(NAME): $(OBJ_DIR) $(addprefix $(OBJ_DIR), $(OBJET))
	@ar rc $(NAME) $(addprefix $(OBJ_DIR), $(OBJET)) && ranlib $(NAME)

$(OBJ_DIR) :
	mkdir $(OBJ_DIR)
	mkdir $(OBJ_DIR)srcs

$(OBJ_DIR)%.o: %.c $(INC_FILES)
	$(CC) $(CFLAGS) -I ./$(INC) -o $@ -c $<

clean:
	@echo "Clean Cobaye"
	@/bin/rm -rf $(OBJ_DIR)

fclean:
	@echo "fClean Cobaye"
	@/bin/rm -rf $(OBJ_DIR)
	@/bin/rm -f $(NAME)

re: fclean all

test:
	make -C tests
