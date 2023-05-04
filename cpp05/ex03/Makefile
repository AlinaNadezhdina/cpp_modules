NAME	=	main

FLAGS	=	-Wall -Wextra -Werror -std=c++98

.PHONY: 	all clean fclean re

SRC		=	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp\
			RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

HEADER	=	Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp\
			RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.cpp

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