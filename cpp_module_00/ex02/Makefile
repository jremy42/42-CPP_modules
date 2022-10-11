SRC = tests.cpp Account.cpp
NAME = account
CXXFLAGS = -Werror -Wall -Wextra -std=c++98
CXX = c++
OBJ = $(SRC:.cpp=.o)
HEAD = Account.hpp

all : $(NAME)

$(NAME) : $(OBJ) $(HEAD)
			$(CXX) $(CXXFLAGS) $(IFLAGS) -o $(NAME) $(OBJ)

.cpp.o: $(HEAD)
		$(CXX) -c $(CXXFLAGS) $< -o $(<:.cpp=.o)	
clean : 
		@rm -rf ${OBJ} 2> /dev/null

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test
