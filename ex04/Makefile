# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrocca <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 18:10:16 by lrocca            #+#    #+#              #
#    Updated: 2021/11/09 17:27:30 by lrocca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME	=	replace
FILES	=	main.cpp

OBJ		=	$(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(CFLAGS) $^ -o $@

clean: ;

fclean: clean
	$(RM) $(NAME) $(wildcard *.replace)

re: fclean all

test: $(NAME)
	./$^ $(FILES) include ciao
