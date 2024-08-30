#-----------------------Flags_and_Name---------------------
NAME	=	phonebook
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

#------------------------Colors-----------------------------

define generate_random_color
python3 -c "import random; \
print(''.join(['\033[38;5;' + str(random.randint(16, 255)) + 'm' + c + '\033[0m' for c in '$(1)']))"
endef

#------------------------Rules------------------------------

all:	${NAME}

$(NAME):
	@$(call generate_random_color, $(CC) $(CFLAGS) -o $(NAME))
	@$(CC) $(CFLAGS) phonebook.cpp -o $(NAME)

re: fclean all

clean:
	rm -rf $(NAME)

fclean: clean

.PHONY: all clean fclean re

