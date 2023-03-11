NAME = solong
CC = cc

SRC = so_long.c ./parsing/parsing_utils.c ./so_long_utils/so_long_utils.c \
	  ./graphic/graphics.c ./graphic/graphic_utils.c\
	  ./error_handler/error_utils.c
OBJ = $(SRC:.c=.o)
RM = rm -rf

all : $(NAME)

$(NAME): $(OBJ)
		$(CC)  $(OBJ) -lmlx -framework OpenGL -framework AppKit -o $(NAME)\
		 				./libft/libft/libft.a ./libft/get_next_line/*.c 
		@$(RM) $(OBJ)

%.o: %.c libsolong.h
	$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@
	@echo "the file $@ has been created from $<"


clean:
		@$(RM) $(OBJ)
		@echo "all the .o has been deleted successfully"

fclean: clean
		@$(RM) $(NAME)
		@echo "the executable so_long has been deleted"
	
re: fclean all

.PHONY : clean $(NAME) all fclean bonus re