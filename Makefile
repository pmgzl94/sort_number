SRC	=	main.c	\
		is_number.c	\
		my_getnbr.c	\
		error.c		\
		radix.c		\
		linked_list/complete_linked_list.c\
		linked_list/add_element.c       \
		linked_list/insert_element.c    \
        linked_list/destroy.c           \
		linked_list/rotate_linked_list.c\
        linked_list/swap_element.c      \
		linked_list/return_size.c       \
		linked_list/display.c      \

NAME	=	push_swap

SRCDIR  =       ./src/

OBJ     =       $(addprefix $(SRCDIR), $(SRC:.c=.o))

CPPFLAGS        +=      -I include -g3

all:    $(NAME)

$(NAME):        $(OBJ)
		gcc -o $(NAME) $(CPPFLAGS) $(OBJ) $(MAIN)

debug:
	gcc -o $(NAME) $(OBJ) $(MAIN) $(CFLAGS) $(CPPFLAGS)
	valgrind --track-origins=yes --dsymutil=yes ./$(NAME)

debug_free:     fclean $(OBJ)
	gcc -o $(NAME) $(OBJ) $(MAIN) $(CFLAGS) $(CPPFLAGS)
	valgrind --leak-check=full ./$(NAME)

clean:
	rm -rf $(OBJ)
	rm -rf *.o
	rm -rf *.gc*
	rm -rf *vg*
	rm -rf unit_tests

# tests_run:      fclean
#         gcc -o unit_tests $(addprefix $(SRCDIR), $(SRC)) $(CRT) --coverage -lcr\
# iterion -I include/
#         ./unit_tests
# 	gcovr
#         rm unit_tests

fclean: clean
	rm -f $(NAME)

re:     fclean all
