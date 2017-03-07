# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/27 18:53:20 by ggladkov          #+#    #+#              #
#    Updated: 2017/02/28 01:24:37 by ggladkov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRCS = *.c

OBJ = *.o

CC = gcc

HEADER = libft.h

$(NAME):
	$(CC) $(FLAGS) -c $? $(SRCS) $(HEADER)
	ar rc $(NAME) $? $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean: 
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) 
	rm -f $(NAME)

re:
	fclean 
	all	
