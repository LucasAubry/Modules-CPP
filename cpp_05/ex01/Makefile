#-----------------------Flags_and_Name---------------------
NAME	=	dog_cat_feuille
CXX		=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

#------------------------Colors-----------------------------

define generate_random_color
python3 -c "import random; \
print(''.join(['\033[38;5;' + str(random.randint(16, 255)) + 'm' + c + '\033[0m' for c in '$(1)']))"
endef

#-----------------------Source------------------------------
FILES	=	main.cpp \
			Bureaucrat.cpp \
			Form.cpp \
			
#------------------------Rules------------------------------

OBJS =	${FILES:.cpp=.o}

all:	${NAME}

$(NAME): ${OBJS}
	@$(call generate_random_color, $(CXX) -o $(NAME))
	@$(CXX) -o $(NAME) ${OBJS}

re: fclean all

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

.PHONY: all clean fclean re
