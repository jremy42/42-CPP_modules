SRC = main.cpp Cat.cpp Dog.cpp Animal.cpp Brain.cpp
NAME = Animal
CXXFLAGS = -Werror -Wall -Wextra -std=c++98
CXX = c++
OBJ = $(SRC:.cpp=.o)
HEAD = Cat.hpp Dog.hpp Animal.hpp Brain.hpp

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