SOURCES = main.c \
		pars.c \
		split.c \
		useful_functions.c \
		useful_functions2.c \
		algo.c \
		sort_dict.c \
		error.c \
		free_utils.c
OBJECTS = $(SOURCES:.c=.o)
INCLUDES = -I .

CC = cc
NAME = rush-02
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c
	@$(CC) $(INCLUDES) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	@$(CC) $(CFLAGS) $(INCLUDES) $(OBJECTS) -o $(NAME)

clean:
	@rm -f $(OBJECTS)

fclean: clean 
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean re fclean
