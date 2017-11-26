# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/02 18:45:43 by ntoniolo          #+#    #+#              #
#    Updated: 2017/11/26 20:21:32 by apachkof         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = dummy_test
DIR_FRAMEWORK = ../framework/

CC ?= gcc

CFLAGS = -Wall -Werror -Wextra

CPPFLAGS_FILES = includes/dummy.h

CPPFLAGS = -I includes/ -I $(DIR_FRAMEWORK)/includes/

LDLIBS = -lunit

LDFLAGS = -L $(DIR_FRAMEWORK)/

SRC_DIR =

SRC = main.c \
dummy/00_launcher.c \
dummy/01_always_true.c \
dummy/02_always_false.c \
dummy/03_always_segv.c \
dummy/04_always_buse.c \

OBJ_DIR = objs/

OBJET = $(SRC:.c=.o)


.PHONY: all, clean, fclean, re, test

all: $(NAME)

$(NAME): $(OBJ_DIR) lib $(addprefix $(OBJ_DIR), $(OBJET))
	@$(CC) $(CPPFLAGS) $(addprefix $(OBJ_DIR), $(OBJET)) $(LDLIBS) $(LDFLAGS) -o $(NAME)
	./$(NAME) $(ARGV)

lib:
	@(make -C $(DIR_FRAMEWORK))

$(OBJ_DIR) :
	@mkdir $(OBJ_DIR)
	@mkdir $(OBJ_DIR)/dummy

$(OBJ_DIR)%.o: $(addprefix $(SRC_DIR), %.c) $(CPPFLAGS_FILES)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	@echo "Clean tests"
	@/bin/rm -rf $(OBJ_DIR)

fclean:
	@echo "fClean test_libft"
	@/bin/rm -rf $(OBJ_DIR)
	@/bin/rm -f $(NAME)

re: fclean all
