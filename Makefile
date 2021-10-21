
# PROGRAMME
NAME			= push_swap

# SYSTEM FUNCTIONS
CC				= gcc
RM				= rm -rf

# SOURCES
SRCS			= algo.c	\
				  bubble_sort.c	\
				  check_args.c	\
				  chunk_length.c	\
				  copy_list.c	\
				  dist.c	\
				  duplicates.c	\
				  error_handler.c	\
				  free_str.c	\
				  ft_atoi.c	\
				  ft_split.c	\
				  ft_strdup.c	\
				  ft_strlen.c	\
				  ft_substr.c	\
				  get_median.c	\
				  init_ps.c	\
				  insert_sort.c	\
				  is_sorted.c	\
				  list_append.c	\
				  list_p.c	\
				  list_r.c	\
				  list_swap.c	\
				  loop_on_p.c	\
				  loop_on_r.c	\
				  main.c	\
				  max_chunk.c	\
				  min_chunk.c	\
				  move_to_a.c	\
				  move_to_b.c	\
				  push_cheap.c	\
				  push_to_a.c	\
				  quick_sort.c	\
				  sort.c	\
				  split_args.c	\
				  trimstr.c	\
				  update_chunk.c	\


OBJS			= ${SRCS:.c=.o}

# FLAGS
CFLAGS			= -Wall -Wextra -Werror -c
LFLAGS			=

# DEBUG usage: make {...} DEBUG=1
ifeq (${DEBUG}, 1)
	CFLAGS += -g3 -fsanitize=address
	LFLAGS += -lasan
endif

# RULES
${NAME}:	${OBJS}
			${CC} ${OBJS} ${LFLAGS} -o ${NAME}

all:		${NAME}

# COMPILATION
%.o:	%.c
				${CC} ${CFLAGS} $< -o $@

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re