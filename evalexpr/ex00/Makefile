# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/25 10:04:34 by zmahomed          #+#    #+#              #
#    Updated: 2019/03/02 07:23:09 by zmahomed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr 

SRC = ./srcs/*.c

SRCO = *.o

FLAG = -Wall -Werror -Wextra

INCLUDE = ./includes/*.h

all: $(NAME)

$(NAME):
	gcc -c $(FLAG) $(SRC)
	gcc $(FLAG) $(SRCO) -o $(NAME) 

clean:
	/bin/rm -f *.o

fclean: clean 
	/bin/rm -f $(NAME)

re: fclean all
