CC = gcc

SRC		=	src/map.c \
			src/main.c \

OBJ	=	$(SRC:src/%.c=obj/%.o)

NAME    =	sudoku

CFLAGS	+=	-Wall -Wextra -I./include -g

all: 	$(NAME)

$(NAME):	 $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

obj/%.o: src/%.c
	mkdir -p $(dir $@)
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -rf obj
	rm -f vgcore*

fclean: clean
	rm -f $(NAME)

run: all running fclean

running:
	./$(NAME)

re:		clean all
