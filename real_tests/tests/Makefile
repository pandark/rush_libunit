# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/02 18:45:43 by ntoniolo          #+#    #+#              #
#    Updated: 2017/11/25 22:29:56 by ntoniolo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tests_libft

CC = gcc

CFLAGS = -Wall -Werror -Wextra

INC_FILES = includes/tests_libft.h

INC = includes/ -I ../../framework/includes/ -I ../includes/

SRC_DIR =

SRC = ft_itoa/00_ft_itoa_launcher.c \
	  ft_itoa/01_ft_itoa_basic.c \
	  ft_itoa/02_ft_itoa_basic_negative.c \
	  ft_itoa/03_ft_itoa_zero.c \
	  ft_itoa/04_ft_itoa_int_max.c \
	  ft_itoa/05_ft_itoa_int_min.c \
	  ft_printf/00_ft_printf_launcher.c \
	  ft_printf/01_ft_printf_basic_print.c \
	  ft_printf/02_ft_printf_print_d.c \
	  ft_printf/03_ft_printf_print_d_preci.c \
	  ft_printf/04_ft_printf_print_wchar_preci_weight.c \
	  ft_printf/05_ft_printf_print_p.c \
	  ft_printf/06_ft_printf_null.c \
	  ft_printf/07_ft_printf_print_s_null_preci.c \
	  ft_printf/08_ft_printf_print_f_0.c \
	  ft_printf/09_ft_printf_print_f_rounded.c \
	  ft_printf/10_ft_printf_print_f_preci.c

OBJ_DIR = objs/

OBJET = $(SRC:.c=.o)

DIR_FRAMEWORK = ../../framework/

DIR_LIB_TESTED = ../
NAME_LIB_TESTED = libft.a
ARG_LIB_TESTED = -lft

FLAG_LIB = -lunit $(ARG_LIB_TESTED)

DIR_LIB = libs/

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME): $(OBJ_DIR) lib $(addprefix $(OBJ_DIR), $(OBJET))
	@$(CC) -I $(INC) main.c $(addprefix $(OBJ_DIR), $(OBJET)) -L./$(DIR_LIB) $(FLAG_LIB) $(SDL_FLAG) $(FRAMEWORK) -o $(NAME)
	./$(NAME) $(ARGV)

lib:
	@(cd $(DIR_FRAMEWORK) && $(MAKE))
	@(cp $(DIR_FRAMEWORK)libunit.a $(DIR_LIB))
	@(cd $(DIR_LIB_TESTED) && $(MAKE))
	@(cp $(DIR_LIB_TESTED)$(NAME_LIB_TESTED) $(DIR_LIB))

$(OBJ_DIR) :
	@mkdir $(DIR_LIB)
	@mkdir $(OBJ_DIR)
	@mkdir $(OBJ_DIR)/ft_itoa
	@mkdir $(OBJ_DIR)/ft_printf

$(OBJ_DIR)%.o: $(addprefix $(SRC_DIR), %.c) $(INC_FILES)
	$(CC) $(CFLAGS) -I ./$(INC) -o $@ -c $<

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
