NAME = libft.a
CC = gcc
HEADERSDIR = includes/
CFLAGS = -Wall -Werror -Wextra -I $(HEADERSDIR)
AR = ar rcs
RM = rm -f

SRCS=$(shell find . -name '*.c')
OBJS=$(SRCS:.c=.o)
OBJS_BONUS = $(SRC_BONUS:c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(OBJS) $(OBJS_BONUS)
	$(AR) $(NAME) $^

.PHONY: all clean fclean re bonus
