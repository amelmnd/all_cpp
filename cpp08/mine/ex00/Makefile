# COLOR MAKEFILE
COLOR_RESET=\033[0m
COLOUR_GREEN=\033[0;32m
COLOUR_MAGENTA = \033[0;35m
COLOUR_BLUE=\033[0;36m

# VAR
NAME = easyfind
CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

HEADERS = easyfind.hpp
SRCS_FILES = main.cpp
OBJ = $(SRCS_FILES:.cpp=.o)

# RULES
all: $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME):  $(OBJ)
	$(CPP) $(CFLAGS) $(SRCS_FILES) -o $(NAME)
	@echo "$(COLOUR_GREEN)$(NAME) generate 🦖$(COLOR_RESET)"

# Clean
clean:
	@rm -rf $(OBJ)
	@echo "$(COLOUR_BLUE) clean 🐟$(END_COLOR)"

fclean : clean
	@rm -rf $(NAME)
	@echo "$(COLOUR_BLUE) fclean 🐳$(COLOR_RESET)"

re:fclean all
	@echo "$(COLOUR_MAGENTA)make re OK 🌸$(COLOR_RESET)"

.PHONY: all clean fclean re
