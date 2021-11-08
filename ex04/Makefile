# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrocca <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 18:10:16 by lrocca            #+#    #+#              #
#    Updated: 2021/11/08 19:41:37 by lrocca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror

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
