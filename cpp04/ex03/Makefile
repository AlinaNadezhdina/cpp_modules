NAME	=	main

FLAGS	=	-Wall -Wextra -Werror -std=c++98

.PHONY: 	all clean fclean re

SRC		=	main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp\
			MateriaSource.cpp

HEADER	=	AMateria.hpp Character.hpp Cure.hpp Ice.hpp\
			ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp

OBJ		=	$(SRC:.cpp = .o)

all:		$(NAME)

$(NAME):	$(HEADER) $(OBJ)
			clang++ $(FLAGS) -o $(NAME) $(OBJ)
		
.cpp.o:
			clang++ $(FLAGS) -c $< -o $@
clean:
			rm -f *.o

fclean:		clean
			rm -f $(NAME)

re:		fclean all