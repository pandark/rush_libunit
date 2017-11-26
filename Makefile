# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/26 21:37:14 by apachkof          #+#    #+#              #
#    Updated: 2017/11/26 22:25:01 by apachkof         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	make -C framework/
	make -C ./tests/
	make -C ./real_tests/

test:
	-make test -C ./tests/
	-make test -C ./real_tests/

clean:
	make clean -C framework/
	make clean -C ./tests/
	make clean -C ./real_tests/
	make clean -C ./real_tests/tests/

fclean:
	make fclean -C framework/
	make fclean -C ./tests/
	make fclean -C ./real_tests/
	make fclean -C ./real_tests/tests/

re:
	make re -C framework/
	make re -C ./tests/
	make re -C ./real_tests/

.PHONY: all, clean, fclean, re, test
