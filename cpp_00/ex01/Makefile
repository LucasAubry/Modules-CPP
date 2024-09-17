#-----------------------Flags_and_Name---------------------
NAME	=	phonebook
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

#------------------------Colors-----------------------------

define generate_random_color
python3 -c "import random; \
print(''.join(['\033[38;5;' + str(random.randint(16, 255)) + 'm' + c + '\033[0m' for c in '$(1)']))"
endef

#-----------------------Source------------------------------
FILES	=	main.cpp	\
			phonebook.cpp \
			search.cpp \

#------------------------Rules------------------------------


OBJS =	${FILES:.cpp=.o}

.c.o:
				$(CC) $(CFFLAGS) -cpp $< -o $(<:.cpp=.o)

all:	${NAME}

$(NAME): ${OBJS}
	@$(call generate_random_color, $(CC) $(CFLAGS) -o $(NAME))
	@$(CC) $(CFLAGS) -o $(NAME) ${OBJS}

re: fclean all

clean:
	rm -rf $(NAME)

fclean: clean

.PHONY: all clean fclean re

