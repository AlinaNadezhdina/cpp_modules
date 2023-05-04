NAME	=	main

FLAGS	=	-Wall -Wextra -Werror -std=c++98

.PHONY: 	all clean fclean re

SRC		=	main.cpp

OBJ		=	$(SRC:.cpp = .o)

all:		$(NAME)

$(NAME):	$(OBJ)
			clang++ $(FLAGS) -o $(NAME) $(OBJ)
		
.cpp.o:
			clang++ $(FLAGS) -c $< -o $@
clean:
			rm -f *.o

fclean:		clean
			rm -f $(NAME)

re:		fclean all