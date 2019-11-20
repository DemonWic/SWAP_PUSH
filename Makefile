# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahintz <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/20 10:21:15 by ahintz            #+#    #+#              #
#    Updated: 2019/11/20 13:53:20 by ahintz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_CHK = checker

NAME_PUSH = push_swap


LIB_PATH = ./ft_printf/libft/

PRINTF_PATH = ./ft_printf/

INCL = ./include/

LINKS = -L $(LIB_PATH) -lft  -L $(PRINTF_PATH) -lftprintf

CC  = gcc -Wall -Wextra -Werror 

PATH = src_checker/

PATH2 = src_push_swap/


SRC =	main.c checker.c check_args.c init_a_b_stacks.c get_next_line.c do_oper.c do_p.c do_r.c do_rr.c do_s.c atoli.c print_stack.c


SRC2 = main.c push_swap.c do_p.c do_r.c do_rr.c do_s.c check_args.c mini_sort.c insertion_sort.c sort_stack.c init_a_b_stacks.c pre_sort.c mini_sort_2.c cpy_stacks.c pre_insort.c push_a.c push_b.c atoli.c print_stack.c r_or_rr.c


OBJ_LIB = *.o
OBJ_LIB2 = $(addprefix $(LIB_PATH), $(OBJ_LIB))

OBJ_PRINTF = $(addprefix $(PRINTF_PATH), $(OBJ_LIB))

SRC_CHK = $(addprefix $(PATH), $(SRC))
		
SRC_PUSH = $(addprefix $(PATH2), $(SRC2))

all: $(NAME_CHK) $(NAME_PUSH)

$(NAME_CHK):
	@$(CC) $(SRC_CHK) $(LINKS) -I$(INCL) -o $(NAME_CHK)

$(NAME_PUSH):
	@$(CC) $(SRC_PUSH) $(LINKS) -I$(INCL) -o $(NAME_PUSH)

clean:
	@/bin/rm -rf $(OBJ_LIB2)	
	@/bin/rm -rf $(OBJ_PRINTF)	

fclean: clean
	@/bin/rm -rf $(NAME_CHK)
	@/bin/rm -rf $(NAME_PUSH)

re: fclean all












