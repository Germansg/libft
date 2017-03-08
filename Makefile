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

FLAGS = -Wall -Wextra -Werror -I. -c

SRCS = *.c

OBJ = $(SRCS:%.c=%.o)

CC = gcc

HEADER = libft.h

$(NAME): 
	$(CC) $(FLAGS) $(SRCS) $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

fclean:	clean
		rm -f $(NAME) 

clean: 
	rm -f $(OBJ) 

re:	fclean all

.PHONY: clean fclean re
