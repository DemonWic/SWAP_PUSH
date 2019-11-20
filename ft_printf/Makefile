# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahintz <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/20 14:21:00 by ahintz            #+#    #+#              #
#    Updated: 2019/11/20 14:21:03 by ahintz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LNAME = libft
SRCS = *.c get_types/*.c utils/*.c va_functions/*.c print/*.c \
        check_fmt/*.c
INC = includes
LINC = libft/libft.a
OBJ = libft/*.o *.o
FLAGS = -Wall -Wextra -Werror -Ofast

all: $(NAME)

$(NAME):
	@make -C $(LNAME)
	@gcc   -I $(INC) -c $(SRCS) $(FLAGS)
	@ar rc $(NAME) $(OBJ)

clean:
	@make clean -C $(LNAME)
	@rm -f $(OBJ)

fclean: clean
	@make fclean -C $(LNAME)
	@rm -f $(NAME)

re: fclean all
