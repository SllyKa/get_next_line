CC= gcc
FLAGS= -Wall -Wextra -Werror

NAME= libft.a
HNAME= libft.h
INCDIR= includes
OBJS= $(patsubst %.c, %.o, $(wildcard *.c))
SRCS= $(OBJS: .o=.c)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $^

%.o: %.c $(INCDIR)/$(HNAME)
	$(CC) $(FLAGS) -c -I$(INCDIR) $< -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
