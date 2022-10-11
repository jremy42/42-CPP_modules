SRC = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp 
NAME = Materia
CXXFLAGS = -Werror -Wall -Wextra -std=c++98
CXX = c++
OBJ = $(SRC:.cpp=.o)
HEAD = AMateria.hpp Character.hpp Cure.hpp Ice.hpp MateriaSource.hpp IMateriaSource.hpp ICharacter.hpp

all : $(NAME)

$(NAME) : $(OBJ) $(HEAD)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

.cpp.o: $(HEAD)
	$(CXX) -c $(CXXFLAGS) $< -o $(<:.cpp=.o)
	
clean : 
		@rm -rf ${OBJ} 2> /dev/null

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test