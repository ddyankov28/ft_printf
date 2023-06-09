# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 09:58:38 by ddyankov          #+#    #+#              #
#    Updated: 2023/04/17 23:16:39 by ddyankov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCES = ft_printf.c ft_printf_utils.c

OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Werror -Wextra

$(NAME): all

all:
	@cc $(CFLAGS) -c $(SOURCES)
	@ar rcs $(NAME) $(OBJECTS)
	@echo "LIBRARY CREATED SUCCESSFULLY"

clean:
	@/bin/rm -f $(OBJECTS)
	@echo "OBJECTS REMOVED SUCCESSFULLY"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "LIBRARY REMOVED SUCCESSFULLY" 

re: fclean all
