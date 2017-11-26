MAKE = make
CC = gcc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic -g3 -O1
# -fno-omit-frame-pointer -fsanitize=address
CPPFLAGS = -I./includes/ -I./libft_ntoniolo/includes/
LDLIBS = -lft
LDFLAGS = -Llibft_ntoniolo/
NAME = libunit.a

SRC_FILES = launch_tests.c \
			redirect_stdout.c \
			load_test.c

SRC_DIR = .

SRC = $(addprefix $(SRC_DIR)/,$(SRC_FILES))

OBJ_DIR = obj
OBJ = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o, $(SRC))

LIBFT_DIR = ./libft_ntoniolo
LIBFT = libft.a

STEAM = \033[1;30m
COFFEE = \033[1;31m
NC = \033[0m

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ) $(LIBFT_DIR)/$(LIBFT)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(LIBFT_DIR)/$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	$(RM) $(OBJ)
	$(RM) -R $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

.SUFFIXES:

coffee:
	@echo "        $(STEAM)..\"$(NC)"
	@echo "      $(STEAM)..$(NC)  $(STEAM)..\"$(NC)"
	@echo "            $(STEAM)..\"$(NC)"
	@echo "             $(STEAM)..\"$(NC)"
	@echo "            $(STEAM)..\"$(NC)"
	@echo "           $(STEAM)..\"$(NC)"
	@echo "         $(STEAM)..\"$(NC)"
	@echo "##      $(STEAM)..$(NC)     ####"
	@echo "##$(COFFEE).............$(NC)##  ##"
	@echo "##$(COFFEE).............$(NC)##   ##"
	@echo "##$(COFFEE).............$(NC)## ##"
	@echo "##$(COFFEE).............$(NC)###"
	@echo " ##$(COFFEE)...........$(NC)##"
	@echo "¸ ############# ˛"
	@echo "#################"

depend:
	@sed '/#\{35\} Generated #\{34\}/q' Makefile >> Makefile.new
	@mv Makefile.new Makefile
	@$(foreach source, $(SRC), echo '' >> 'Makefile'; \
		gcc -MM $(source) $(CPPFLAGS) \
		| sed 's/\(^.*\.o\): \(.*\.c\)/$$(OBJ_DIR)\/\1: $$(SRC_DIR)\/\2/' >> 'Makefile'; \
		echo '\t$$(CC)' -c '$(patsubst $(SRC_DIR)/%,$$(SRC_DIR)/%, $(source))' '$$(CFLAGS) $$(CPPFLAGS) \
		-o $(patsubst $(SRC_DIR)/%.c,$$(OBJ_DIR)/%.o, $(source))' >> 'Makefile';)

################################### Generated ##################################

$(OBJ_DIR)/launch_tests.o: $(SRC_DIR)/launch_tests.c includes/libunit.h \
  includes/../libft_ntoniolo/includes/libft.h \
  libft_ntoniolo/includes/get_next_line.h \
  libft_ntoniolo/includes/libft.h libft_ntoniolo/includes/ft_printf.h \
  libft_ntoniolo/includes/btree.h
	$(CC) -c $(SRC_DIR)/launch_tests.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/launch_tests.o

$(OBJ_DIR)/redirect_stdout.o: $(SRC_DIR)/redirect_stdout.c includes/libunit.h \
  includes/../libft_ntoniolo/includes/libft.h \
  libft_ntoniolo/includes/get_next_line.h \
  libft_ntoniolo/includes/libft.h libft_ntoniolo/includes/ft_printf.h \
  libft_ntoniolo/includes/btree.h
	$(CC) -c $(SRC_DIR)/redirect_stdout.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/redirect_stdout.o

$(OBJ_DIR)/load_test.o: $(SRC_DIR)/load_test.c includes/libunit.h \
  includes/../libft_ntoniolo/includes/libft.h \
  libft_ntoniolo/includes/get_next_line.h \
  libft_ntoniolo/includes/libft.h libft_ntoniolo/includes/ft_printf.h \
  libft_ntoniolo/includes/btree.h
	$(CC) -c $(SRC_DIR)/load_test.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/load_test.o
