NAME	=	btc

FLAGS	=	-Wall -Wextra -Werror -std=c++98 -g

.PHONY: 	all clean fclean re

SRC		=	main.cpp BitcoinExchange.cpp

HEADER	=	BitcoinExchange.hpp

OBJ		=	$(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJ) ${HEADER}
			c++ $(FLAGS) $(SRC) -o $(NAME)
		
%.o:	%.cpp ${HEADER}
			c++ $(FLAGS) -c $< -o $@
clean:
			rm -f *.o

fclean:		clean
			rm -f $(NAME)

re:		fclean all