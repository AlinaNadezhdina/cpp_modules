NAME	=	main

FLAGS	=	-Wall -Wextra -Werror -std=c++98

.PHONY: 	all clean fclean re

SRC		=	main.cpp Base.cpp

HEADER	=	Base.hpp

OBJ		=	$(SRC:.cpp = .o)

all:		$(NAME)

$(NAME):	$(HEADER) $(OBJ)
			c++ $(FLAGS) -o $(NAME) $(OBJ)
		
.cpp.o:
			c++ $(FLAGS) -c $< -o $@
clean:
			rm -f *.o

fclean:		clean
			rm -f $(NAME)

re:		fclean all