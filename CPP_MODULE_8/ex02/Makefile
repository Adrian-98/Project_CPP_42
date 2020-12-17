# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrian <adrian@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/09 16:46:07 by amunoz-p          #+#    #+#              #
#    Updated: 2020/12/17 12:53:25 by adrian           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			= main.cpp mutantstack.cpp

 OBJS			= $(SRCS:.cpp=.o)

CXX 			=  g++ -std=c++11

RM 				= rm -f

CXXFLAGS 		= -Wall -Wextra -Werror -I.

NAME			=	mutantstack

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
clean:
				$(RM) $(OBJS)
fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re