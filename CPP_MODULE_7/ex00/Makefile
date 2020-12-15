# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/09 16:46:07 by amunoz-p          #+#    #+#              #
#    Updated: 2020/12/15 17:49:30 by amunoz-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			= whatever.cpp

OBJS			= $(SRCS:.cpp=.o)

CXX 			= clang++

RM 				= rm -f

CXXFLAGS 		= -Wall -Wextra -Werror -I.

NAME			=	whatever

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
clean:
				$(RM) $(OBJS)
fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re