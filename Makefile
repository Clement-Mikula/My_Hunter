##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

CPPFLAGS	=	-I ./include/
CFLAGS		=	-Wall -Wextra
DBGFLAGS	=	-g3
GFLAGS		=	-l csfml-system -l csfml-window -l csfml-graphics -l csfml-audio -l csfml-network

CTEST = --coverage -lcriterion

SRC =	sources/click_duck.c	\
		sources/create_sprite.c	\
		sources/create_window.c	\
		sources/destroy_all.c	\
		sources/loop.c	\
		sources/main.c	\
		sources/fly_duck.c	\
		sources/poll_event.c	\

OBJ	=	$(SRC:.c=.o)

SRC_RUN_TEST =  tests/tests_my_printf.c  \

NAME =	my_hunter

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(GFLAGS)

debug: CFLAGS += $(DBGFLAGS)
debug: re

cleantest:
	rm *.gcno
	rm *.gcda
	rm -f unit_tests

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

unit_tests:
	gcc -o unit_tests $(SRC) $(SRC_RUN_TEST) $(CTEST) -I./include -lm

run_tests: unit_tests
	./unit_tests
	gcovr --exclude tests/
	gcovr --exclude tests/ --branches

re: fclean all
