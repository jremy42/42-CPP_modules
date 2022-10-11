SRC = main.cpp ConvScal.cpp 
NAME = conv
CXXFLAGS = -Werror -Wall -Wextra -std=c++98
CXX = c++
OBJ = $(SRC:.cpp=.o)
HEAD = ConvScal.hpp 


all: $(NAME)

$(NAME) : $(OBJ) $(HEAD)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

.cpp.o: $(HEAD)
	$(CXX) -c $(CXXFLAGS) $< -o $(<:.cpp=.o)
	
clean : 
		@rm -rf ${OBJ} 2> /dev/null

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME)
	./conv nan
	@echo
	./conv nanf
	@echo
	./conv +inf
	@echo
	./conv +inff
	@echo
	./conv -inf
	@echo
	./conv -inff
	@echo
	./conv "'a'"
	@echo
	./conv "' '"
	@echo
	./conv "'*'"
	@echo
	./conv 2147483647
	@echo
	./conv 2147483648
	@echo
	./conv -2147483648
	@echo
	./conv -2147483649
	@echo
	./conv 0
	@echo 
	./conv -1
	@echo
	./conv toto
	@echo 
	./conv -1.1
	@echo
	./conv 1f
	@echo
	./conv 1.f
	@echo
	./conv .
	@echo
	./conv f
	@echo
	./conv f1.0
	@echo
	./conv 1.f0
	@echo
	./conv +1.0
	@echo
	./conv 3.14
	@echo
	./conv 3.14f
	@echo
	./conv ""


.PHONY: all clean fclean re test
