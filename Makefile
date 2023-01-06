NAME	=	push_swap

CC		=	gcc

RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

SRCS	=	./push_swap.c\
				clean_exit.c\
				handle_data/nodes.c\
				handle_data/sort_array.c\
				handle_data/stack_is_sorted.c\
				handle_data/stack_len.c\
				handle_data/stack_to_array.c\
				algorithm/handle_number.c\
				algorithm/send_one_chunk2.c\
				algorithm/send_one_chunk.c\
				algorithm/send_to_a2.c\
				algorithm/send_to_a.c\
				algorithm/send_to_b2.c\
				algorithm/send_to_b.c\
				algorithm/split_in_half.c\
				parsing/atoi.c\
				parsing/atoll.c\
				parsing/utils.c\
				parsing/check.c\
				operations/op.c\
				operations/push.c\
				operations/reverse_rotate.c\
				operations/rotate.c\
				operations/swap.c

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

f:			re
			./push_swap

.PHONY:		all clean fclean re f
