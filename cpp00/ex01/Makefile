NAME	=	phonebook

FLAGC	=	-Wall -Wextra -Werror -std=c++98

.PHONY: 	all clean fclean re

SRC		=	ContactClass.cpp PhoneBookClass.cpp main.cpp

HEADER	=	ContactClass.hpp PhoneBookClass.hpp

OBJ		=	$(SRC:.cpp = .o)

all:		$(NAME)

$(NAME):	$(HEADERS) $(OBJ)
			clang++ $(FLAGS) -o $(NAME) $(OBJ)
		
.cpp.o:
			clang++ $(FLAGS) -c $< -o $@
clean:
			rm -f *.o

fclean:		clean
			rm -f $(NAME)
			
re:			fclean all

