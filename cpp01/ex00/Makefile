NAME	=	zombie

FLAGS	=	-Wall -Wextra -Werror -std=c++98

.PHONY: 	all clean fclean re

SRC		=	main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

HEADER	=	Zombie.hpp

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
