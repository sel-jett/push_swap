next = my_checker/get_next
parsing = my_checker/parcing
ch = my_checker
utils = my_checker/utils
istr = my_checker/instructions

SRC = 	indexing.c lst_functions.c my_malloc.c operations_1.c parsing.c \
		push.c push_swap.c rotate.c rrotate.c sort_3.c sort_5.c sort_100.c \
		strtok.c swap.c utils.c sort_500.c

SRCB =	$(utils)/indexing_bonus.c $(utils)/lst_functions_bonus.c \
		$(parsing)/my_malloc_bonus.c $(parsing)/parsing_bonus.c \
		$(istr)/push_bonus.c $(ch)/main_bonus.c $() $(istr)/rotate_bonus.c \
		$(istr)/rrotate_bonus.c $(parsing)/strtok_bonus.c $(istr)/swap_bonus.c \
		$(utils)/utils_bonus.c $(next)/get_next_bonus.c \
		$(next)/get_next_utils_bonus.c $(utils)/operations_1_bonus.c

OBJS = ${SRC:.c=.o}
OBJB = ${SRCB:.c=.o}

FLAGS = -Wall -Wextra -Werror
CC = cc
RM = rm -f
NAME = push_swap
BNAME = checker

all: ${NAME}

bonus: ${BNAME}

%_bonus.o : %_bonus.c $(ch)/push_swap_bonus.h
	@echo "Compiling bonus $<"
	@${CC} ${FLAGS} -c $< -o $@

%o : %c push_swap.h
	@echo "Compiling $<"
	@${CC} ${FLAGS} -c $< -o $@

${NAME}: ${OBJS}
		@echo "Linking $@"
		@${CC} ${FLAGS} $(OBJS) -o $@

${BNAME}: ${OBJB}
		@echo "Linking bonus $@"
		@${CC} ${FLAGS} $(OBJB) -o $@

clean:
	@echo "Cleaning ..."
	@${RM} ${OBJS} ${OBJB}

fclean: clean
	@echo "Full cleaning ..."
	@${RM} ${NAME} ${BNAME}

re: fclean all

.PHONY: all clean fclean re
