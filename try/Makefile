# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okres <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 09:42:44 by okres             #+#    #+#              #
#    Updated: 2016/11/07 12:30:13 by okres            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = awesomeprog

SRC = source.c

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC)
clean: 
	/bin/rm -f *.o
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
