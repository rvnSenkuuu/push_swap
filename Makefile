# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/16 18:20:44 by tkara2            #+#    #+#              #
#    Updated: 2024/07/15 11:25:45 by tkara2           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

SRCS_FILES	=	main.c \
				check_input.c \
				error.c \
				create_stack.c \
				free_utils.c \
				push_instruction.c \
				rotate_instruction.c \
				rrotate_instruction.c \
				swap_instruction.c \
				sort_stack.c \
				radix_sort.c \
				sort_utils.c \
				stack_utils.c \

INC_FILE	=	push_swap.h

SRCS_PATH	=	srcs/
OBJS_PATH	=	.objs/
INC_PATH	=	include/

LIBFT_PATH	=	./lib/libft/
LIBFT_LIB	=	./lib/libft/libft.a

SRCS		=	$(addprefix $(SRCS_PATH), $(SRCS_FILES))
OBJS		=	$(addprefix $(OBJS_PATH), $(SRCS:.c=.o))
INC			=	$(addprefix $(INC_PATH), $(INC_FILE))

CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra -I$(INC_PATH) -I$(LIBFT_PATH) -g3
LFLAGS	=	-L$(LIBFT_PATH) -lft
RM		=	rm -rf

NORM_FLAG	=	-R CheckForbiddenSourceHeader -R CheckDefine

all:	$(NAME)

$(NAME):	$(OBJS) $(LIBFT_LIB)
	$(CC) $(CFLAGS) $(OBJS) $(LFLAGS) -o $(NAME)

$(OBJS_PATH)%.o:	%.c
	mkdir -p ${@D}
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT_LIB):
	@make -C $(LIBFT_PATH)

norm:
	@make norm -C $(LIBFT_PATH)
	@norminette $(NORM_FLAG) $(SRCS) $(INC)

clean:
	$(RM) $(OBJS_PATH)
	@make clean -C $(LIBFT_PATH)
	@echo "[DONE] Objects files deletion..."

fclean:	clean
	$(RM) $(NAME)
	@make fclean -C $(LIBFT_PATH)
	@echo "[DONE] Push_swap deletion..."

re:	fclean all
	@echo "[DONE] Push_swap recompiled..."

.PHONY:	all clean fclean re libft
