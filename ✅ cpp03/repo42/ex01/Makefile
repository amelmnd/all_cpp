# COLOR MAKEFILE
COLOR_RESET=\033[0m
COLOUR_GREEN=\033[0;32m
COLOUR_MAGENTA = \033[0;35m
COLOUR_BLUE=\033[0;36m

# VAR
NAME = scavTrap
CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS_FILES = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJ = $(SRCS_FILES:.cpp=.o)

# RULES
all: $(NAME)

$(NAME):  $(OBJ)
	@$(CPP) $(CFLAGS) $(SRCS_FILES) -o $(NAME)
	@echo "$(COLOUR_GREEN)$(NAME) generate 🦖$(COLOR_RESET)"

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

# Clean
clean:
	@rm -rf $(OBJS)
	@echo "$(COLOUR_BLUE) clean 🐟$(END_COLOR)"

fclean : clean
	@rm -rf $(NAME)
	@echo "$(COLOUR_BLUE) fclean 🐳$(END_COLOR)"

re:fclean all
	@echo "$(COLOUR_MAGENTA)make re OK 🌸$(END_COLOR)"

.PHONY: all clean fclean re
