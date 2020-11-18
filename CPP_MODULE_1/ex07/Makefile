# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/17 19:39:08 by amunoz-p          #+#    #+#              #
#    Updated: 2020/11/18 18:31:11 by amunoz-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			= main.cpp

OBJS			= $(SRCS:.cpp=.o)

CXXF 			= clang++

RM 				= rm -f

CXXFLAGS 		= -Wall -Wextra -Werror -I. -g3 -fsanitize=address

NAME			=	replace

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
clean:
				$(RM) $(OBJS)
fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
