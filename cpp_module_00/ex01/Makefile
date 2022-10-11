SRC = main.cpp Phonebook.class.cpp Contact.class.cpp
NAME = My_Awesome_PhoneBook
CXXFLAGS = -Werror -Wall -Wextra -std=c++98
CXX = c++
OBJ = $(SRC:.cpp=.o)
HEAD = Contact.class.hpp Phonebook.class.hpp


all : $(NAME)

$(NAME) : $(OBJ) $(HEAD)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

.cpp.o : ${HEAD}
	$(CXX) -c ${CXXFLAGS} $< -o $(<:.cpp=.o)

clean : 
		@rm -rf ${OBJ} 2> /dev/null

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test


