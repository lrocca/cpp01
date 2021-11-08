# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrocca <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 17:18:51 by lrocca            #+#    #+#              #
#    Updated: 2021/11/08 17:19:48 by lrocca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror

NAME	=	brain
FILES	=	main.cpp

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(CFLAGS) $^ -o $@

clean: ;

fclean: clean
	$(RM) $(NAME)

re: fclean all
