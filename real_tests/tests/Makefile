# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/02 18:45:43 by ntoniolo          #+#    #+#              #
#    Updated: 2017/11/26 16:37:23 by ntoniolo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tests_cobaye
NAME_LIB_TESTED = libcobaye.a
DIR_LIB_TESTED = ../
DIR_FRAMEWORK = ../../framework/

CC = gcc

CFLAGS = -Wall -Werror -Wextra

CPPFLAGS_FILES = includes/tests_cobaye.h

CPPFLAGS = -I includes/ -I $(DIR_FRAMEWORK)/includes/ -I ../includes/ -I $(DIR_FRAMEWORK)/libft_ntoniolo/includes/

LDLIBS = -lft -lunit -lcobaye

LDFLAGS = -L $(DIR_FRAMEWORK)/ -L $(DIR_FRAMEWORK)/libft_ntoniolo/ -L $(DIR_LIB_TESTED)

SRC_DIR =

SRC = main.c \
co_itoa/00_co_itoa_launcher.c \
co_itoa/01_co_itoa_basic.c \
co_itoa/02_co_itoa_basic_negative.c \
co_itoa/03_co_itoa_zero.c \
co_itoa/04_co_itoa_int_max.c \
co_itoa/05_co_itoa_int_min.c \

OBJ_DIR = objs/

OBJET = $(SRC:.c=.o)


DIR_LIB = libs/

.PHONY: all, clean, fclean, re, test

all: $(NAME)

$(NAME): $(OBJ_DIR) lib $(addprefix $(OBJ_DIR), $(OBJET))
	@$(CC) $(CPPFLAGS) $(addprefix $(OBJ_DIR), $(OBJET)) $(LDLIBS) $(LDFLAGS) $(FRAMEWORK) -o $(NAME)
	./$(NAME) $(ARGV)

lib:
	@(cd $(DIR_FRAMEWORK) && $(MAKE))
	@(cp $(DIR_FRAMEWORK)libunit.a $(DIR_LIB))
	@(cd $(DIR_LIB_TESTED) && $(MAKE))
	@(cp $(DIR_LIB_TESTED)$(NAME_LIB_TESTED) $(DIR_LIB))

$(OBJ_DIR) :
	@mkdir $(DIR_LIB)
	@mkdir $(OBJ_DIR)
	@mkdir $(OBJ_DIR)/co_itoa

$(OBJ_DIR)%.o: $(addprefix $(SRC_DIR), %.c) $(CPPFLAGS_FILES)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	@echo "Clean tests"
	@(cd $(DIR_FRAMEWORK) && $(MAKE) clean)
	@(cd $(DIR_LIB_TESTED) && $(MAKE) clean)
	@/bin/rm -rf $(OBJ_DIR)
	@/bin/rm -rf $(DIR_LIB)

fclean:
	@echo "fClean test_libft"
	@/bin/rm -rf $(OBJ_DIR)
	@(cd $(DIR_FRAMEWORK) && $(MAKE) clean)
	@(cd $(DIR_LIB_TESTED) && $(MAKE) clean)
	@/bin/rm -rf $(DIR_LIB)
	@/bin/rm -f $(NAME)

re: fclean all
