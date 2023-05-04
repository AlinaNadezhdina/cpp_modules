NAME	=	megaphone

FLAGC	=	-Wall -Wextra -Werror -std=c++98

.PHONY: 	all clean fclean re test1 test2 test3

SRC		=	megaphone.cpp

OBJ		=	$(SRC:.cpp = .o)

all:		$(NAME)

$(NAME): $(OBJ)
			clang++ $(FLAGS) -o $(NAME) $(OBJ)
		
.cpp.o:
			clang++ $(FLAGS) -c $< -o $@
clean:
			rm -f *.o

fclean: clean
		rm -f $(NAME)
re:		fclean all

test1:
	./megaphone "shhhhh... I think the students are asleep..."

test2:
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."

test3:
	./megaphone

