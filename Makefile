NAME = philo
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g -pthread
RM = rm -f

SRCS = 	main.c \
		parsing.c utils.c \
		initializator.c \
		routine.c monitor.c \
		threads.c \
		
OBJS = $(SRCS:.c=.o)

LIBFT = libft/libft.a

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C libft

clean:  
	$(MAKE) clean -C libft
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) fclean -C libft
	$(RM) $(NAME)

re: fclean all
