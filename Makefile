##
## EPITECH PROJECT, 2024
## make lib
## File description:
## make lib
##

#
# HELP TO BUILD
#

RM			?=	rm -rf

#
# BINARY CREATION
#

SRCDIR		=		src

SRC 		= 		$(shell find $(SRCDIR) -name '*.c')

OBJ			=		$(SRC:.c=.o)

NAME		=		libverse.a

HEADER	=	include/libgraphic.h			\
          	include/macro.h			  		\
          	include/struct.h		 	 	\
          	include/type_id.h				\
		  	include/my_encapsulation.h

CFLAGS		=		-Wall -Wextra -Wpedantic -Werror -lcsfml-audio

CPPFLAGS	=		-iquote include/.

UT_SRC =	tests/graphics_test.c

UT_NAME	=	graphics_tests

UT_FLAGS	=	--coverage -lcriterion

draw_name:
	@cat .name

all:		$(NAME)

$(NAME):	draw_name	$(OBJ)
	@$(AR) rc $(NAME) $(OBJ)
	@echo "Library Libverse: Ready to use"

clean:
	@$(RM) $(OBJ)
	@find -name "*~" -delete -o -name "#*#" -delete
	@find -name "*.gcda" -delete -o -name "*.gcno" -delete
	@echo "Library Libverse: File object deleted"

fclean: clean
	@find -name "coding-style-reports.log" -delete
	@echo "Library Libverse: Deleted"

re:	fclean all

debug: re clean

.PHONY: all				\
		re			    \
		fclean	  		\
		debug			\
		clean
