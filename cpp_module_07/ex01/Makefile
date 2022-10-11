SRC = main.cpp
NAME = func
CXXFLAGS = -Werror -Wall -Wextra -std=c++98
CXX = c++
OBJ = $(SRC:.cpp=.o)
HEAD = iter.hpp 


all: $(NAME) $(HEAD)

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
