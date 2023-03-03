NAME = solong
CC = cc

SRC = so_long.c
OBJ = $(SRC:.c=.o)
RM = rm -rf

all : $(NAME)

$(NAME): $(OBJ)
		$(CC)  $(OBJ) -lmlx -framework OpenGL -framework AppKit -o $(NAME)
		@$(RM) $(OBJ)

%.o: %.c
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