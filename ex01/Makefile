# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isb <isb@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/22 11:33:14 by adesille          #+#    #+#              #
#    Updated: 2024/12/31 11:04:33 by isb              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

######################## ARGUMENTS ########################

NAME = phonebook 
CFLAGS += -Wall -Wextra -Werror -std=c++98
CC = c++

DEFAULT = \033[0;39m
BLUE = \033[0;34m
DARK_GREEN =\033[0;3;32m
RED = \033[31;1m
WHITE = \033[0;37m
YELLOW = \033[0;33m

######################## UTILS ########################


######################## SOURCES ########################

SRCS = ./phonebook.cpp ./utils.cpp
OBJD_DIR = .obj
OBJS = $(SRCS:%.cpp=$(OBJD_DIR)/%.o)

######################## RULES ########################

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJD_DIR)/%.o : %.cpp
	@mkdir -p $(@D)
	@if [ ! -f .obj/*.o ]; then \
	    echo "$(YELLOW)\nCompiling files...$(DEFAULT)"; \
	fi
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@rm -f $(OBJS)
	@echo "$(DARK_GREEN)\nEvery files are cleaned$(DEFAULT)"

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re