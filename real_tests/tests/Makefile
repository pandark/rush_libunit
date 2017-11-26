# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/02 18:45:43 by ntoniolo          #+#    #+#              #
#    Updated: 2017/11/26 19:18:38 by ntoniolo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tests_cobaye
NAME_LIB_TESTED = libcobaye.a
DIR_LIB_TESTED = ../
DIR_FRAMEWORK = ../../framework/

DIR_LIBFT = ../../libft_ntoniolo/

CC = gcc

CFLAGS = -Wall -Werror -Wextra

CPPFLAGS_FILES = includes/tests_cobaye.h

CPPFLAGS = -I includes/ -I $(DIR_FRAMEWORK)/includes/ -I $(DIR_LIB_TESTED)includes/ -I $(DIR_LIBFT)includes/

LDLIBS = -lft -lunit -lcobaye

LDFLAGS = -L $(DIR_FRAMEWORK)/ -L $(DIR_LIBFT) -L $(DIR_LIB_TESTED)

SRC_DIR =

SRC = main.c \
co_itoa/00_co_itoa_launcher.c \
co_itoa/01_co_itoa_basic.c \
co_itoa/02_co_itoa_basic_negative.c \
co_itoa/03_co_itoa_zero.c \
co_itoa/04_co_itoa_int_max.c \
co_itoa/05_co_itoa_int_min.c \
co_putnbr/00_co_putnbr_launcher.c \
co_putnbr/01_co_putnbr_basic.c \
co_putnbr/02_co_putnbr_negative.c \
co_putnbr/03_co_putnbr_zero.c \
co_putnbr/04_co_putnbr_int_max.c \
co_putnbr/05_co_putnbr_int_min.c \
co_strlcat/00_co_strlcat_launcher.c \
co_strlcat/01_co_strlcat_basic.c \
co_strlcat/05_co_strlcat_size_0.c \
co_strlcat/02_co_strlcat_dest_bigger_than_size.c \
co_strlcat/03_co_strlcat_dest_len_and_size_same.c \
co_strlcat/04_co_strlcat_size_bigger_then_len_src.c \

OBJ_DIR = objs/

OBJET = $(SRC:.c=.o)


.PHONY: all, clean, fclean, re, test

all: $(NAME)

$(NAME): $(OBJ_DIR) lib $(addprefix $(OBJ_DIR), $(OBJET))
	@$(CC) $(CPPFLAGS) $(addprefix $(OBJ_DIR), $(OBJET)) $(LDLIBS) $(LDFLAGS) $(FRAMEWORK) -o $(NAME)
	./$(NAME) $(ARGV)

lib:
	@(make -C $(DIR_FRAMEWORK))
	@(make -C $(DIR_LIBFT))
	@(make -C $(DIR_LIB_TESTED))

$(OBJ_DIR) :
	@mkdir $(OBJ_DIR)
	@mkdir $(OBJ_DIR)/co_itoa
	@mkdir $(OBJ_DIR)/co_putnbr
	@mkdir $(OBJ_DIR)/co_strlcat

$(OBJ_DIR)%.o: $(addprefix $(SRC_DIR), %.c) $(CPPFLAGS_FILES)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	@echo "Clean tests"
	@(make clean -C $(DIR_FRAMEWORK))
	@(make clean -C $(DIR_LIB_TESTED))
	@(make clean -C $(DIR_LIBFT))
	@/bin/rm -rf $(OBJ_DIR)

fclean:
	@echo "fClean test_libft"
	@/bin/rm -rf $(OBJ_DIR)
	@(make fclean -C $(DIR_FRAMEWORK))
	@(make fclean -C $(DIR_LIB_TESTED))
	@(make fclean -C $(DIR_LIBFT))
	@/bin/rm -f $(NAME)

re: fclean all
