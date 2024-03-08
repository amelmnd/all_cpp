# COLOR MAKEFILE
COLOR_RESET=\033[0m
COLOUR_GREEN=\033[0;32m
COLOUR_MAGENTA = \033[0;35m
COLOUR_BLUE=\033[0;36m

# VAR
NAME = megaphone
CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS_FILES = megaphone.cpp

# RULES
all: $(NAME)

$(NAME):
	$(CPP) $(CFLAGS) $(SRCS_FILES) -o $(NAME)
	echo "$(COLOUR_GREEN)$(NAME) generate 🦖$(COLOR_RESET)  "

# Clean
clean:
	@rm -rf $(NAME)
	@echo "$(COLOUR_BLUE) clean 🦋 $(COLOR_RESET)"

fclean :
	@rm -rf $(NAME)
	@echo "$(COLOUR_BLUE) fclean 🐳$(COLOR_RESET)"

re:fclean all
	@echo "$(COLOUR_MAGENTA)make re OK 🌸$(COLOR_RESET)"

.PHONY: all clean fclean re
