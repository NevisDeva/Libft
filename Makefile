#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbeny <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 21:11:22 by nbeny             #+#    #+#              #
#    Updated: 2016/11/10 14:14:23 by nbeny            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	libft.a

SRCS	=	*.c

OBJS	=	*.o

HDRS	=	libft.h

FLAGS	=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME):
		gcc $(FLAGS) -c $(SRCS) -I $(HDRS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all
