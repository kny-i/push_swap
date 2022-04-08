NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_PATH = ./libft/
SRCS = src/main.c src/rotate.c src/simple_sort5.c \
		src/cordinate_comp.c src/push.c src/simple_sort.c src/simple_sort_utils.c \
		src/free.c src/radix.c src/simple_sort3.c src/swap.c src/is_sorted.c \
		src/reverse_rotate.c src/simple_sort4.c list/ft_lstadd_back.c \
		list/ft_lstlast.c list/ft_lstsize.c list/ft_lstadd_front.c \
		list/ft_lstnew.c list/ft_printlst_index_data.c

OBJS = $(SRCS:%.c=%.o)
LIBFTMAKE = $(MAKE) -C ./libft

.PHONY : all
all: $(NAME)

$(NAME): $(OBJS)
		$(LIBFTMAKE)
		$(CC) $(CFLAGS) $(OBJS) $(LIBFT_PATH)libft.a -o $(NAME)

.PHONY : clean
clean :
		$(LIBFTMAKE) clean
		$(RM) $(OBJS)

.PHONY : fclean
fclean: clean
		$(LIBFTMAKE) fclean
		$(RM) $(NAME)

.PHONY : re
re : fclean all
