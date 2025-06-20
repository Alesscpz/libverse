##
## EPITECH PROJECT, 2025
## make lib
## File description:
## make lib
##

#
# HELP TO BUILD
#

CC 			?=	gcc

CP			?=	cp

RM			?=	rm -rf

#
# BINARY CREATION
#

SRC 		= 		main.c													\
					template_src/check_env.c								\
					template_src/handle_event.c								\
					template_src/init_program.c								\
					template_src/loop.c										\
					template_src/print_help.c								\
					template_src/project.c									\

OBJ			=		$(SRC:.c=.o)

NAME		=		project

CFLAGS		=		-Wall -Wextra -Wpedantic -std=c2x \
	-D_POSIX_C_SOURCE=202311L


CPPFLAGS	+=		-iquote include
CPPFLAGS	+=		-lcsfml-audio -lcsfml-graphics
CPPFLAGS	+=		-lcsfml-network -lcsfml-system -lcsfml-window

DEBUG		=	-g3

LDLIBS +=	-lverse -lcsfml-audio -lcsfml-graphics -lcsfml-network
LDLIBS +=	-lcsfml-system -lcsfml-window -lm

LDFLAGS	+=	-L.

UT_SRC =

UT_NAME	=	unit_tests

UT_FLAGS	=	--coverage -lcriterion

all:		$(NAME)

$(NAME):	$(OBJ)
	@make -C utils/libverse all
	@echo "\n"
	$(CC) $(OBJ) -o $(NAME) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS)

clean:
	@make -C utils/libverse clean
	@echo "\n"
	$(RM) $(OBJ)
	@find -name "*~" -delete -o -name "#*#" -delete
	@find -name "*.gcda" -delete -o -name "*.gcno" -delete


fclean: clean
	@make -C utils/libverse fclean
	@echo "\n"
	$(RM) -f $(NAME)
	@find -name "coding-style-re./liblibverse.aports.log" -delete

re:	fclean all
	@echo "\n"
	@make -C utils/libverse re

debug_comp:		$(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(DEBUG) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS)

debug:
	@make -C utils/libverse debug
	@make debug_comp
	@make clean

tests_run:
	@echo "hi"

coverage: tests_run
	gcovr --exclude test/
	@find -name "*.gcda" -delete -o -name "*.gcno" -delete
	@find -name $(UT_NAME) -delete

coding_style: fclean
	coding-style . .
	@cat coding-style-reports.log
	@$(RM) "coding-style-reports.log";

.PHONY: all				\
		re				\
		fclean			\
		clean			\
		debug_comp		\
		debug			\
		tests_run 		\
		coverage 		\
		coding_style	\
