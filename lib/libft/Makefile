# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/10 17:59:47 by tkara2            #+#    #+#              #
#    Updated: 2024/06/22 12:50:41 by tkara2           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS					=	srcs/ctype/ft_isalpha.c \
							srcs/ctype/ft_isdigit.c \
							srcs/ctype/ft_isalnum.c \
							srcs/ctype/ft_isprint.c \
							srcs/ctype/ft_isascii.c \
							srcs/ctype/ft_tolower.c \
							srcs/ctype/ft_toupper.c \
							srcs/string/ft_strlen.c \
							srcs/string/ft_strlcpy.c \
							srcs/string/ft_strlcat.c \
							srcs/string/ft_strncmp.c \
							srcs/string/ft_strchr.c \
							srcs/string/ft_strrchr.c \
							srcs/string/ft_strnstr.c \
							srcs/string/ft_strdup.c \
							srcs/string/ft_substr.c \
							srcs/string/ft_strjoin.c \
							srcs/string/ft_strtrim.c \
							srcs/string/ft_split.c \
							srcs/string/ft_strmapi.c \
							srcs/string/ft_striteri.c \
							srcs/stdlib/ft_atoi.c \
							srcs/stdlib/ft_atol.c \
							srcs/stdlib/ft_itoa.c \
							srcs/stdlib/get_next_line.c \
							srcs/stdio/ft_putchar_fd.c \
							srcs/stdio/ft_putstr_fd.c \
							srcs/stdio/ft_putendl_fd.c \
							srcs/stdio/ft_putnbr_fd.c \
							srcs/stdio/ft_printf/ft_printf.c \
							srcs/stdio/ft_printf/ft_pf_putchar.c \
							srcs/stdio/ft_printf/ft_pf_putstr.c \
							srcs/stdio/ft_printf/ft_pf_putnbr.c \
							srcs/stdio/ft_printf/ft_pf_putnbr_uint.c \
							srcs/stdio/ft_printf/ft_pf_putnbr_hex.c \
							srcs/stdio/ft_printf/ft_pf_putaddr.c \
							srcs/stdio/ft_printf/ft_pf_strlen.c \
							srcs/memory/ft_bzero.c \
							srcs/memory/ft_memset.c \
							srcs/memory/ft_memcpy.c \
							srcs/memory/ft_memchr.c \
							srcs/memory/ft_memcmp.c \
							srcs/memory/ft_memmove.c \
							srcs/memory/ft_calloc.c \
							srcs/memory/ft_free_doubletab.c \
							srcs/list/ft_lstnew_bonus.c \
							srcs/list/ft_lstadd_front_bonus.c \
							srcs/list/ft_lstadd_back_bonus.c \
							srcs/list/ft_lstsize_bonus.c \
							srcs/list/ft_lstlast_bonus.c \
							srcs/list/ft_lstdelone_bonus.c \
							srcs/list/ft_lstclear_bonus.c \
							srcs/list/ft_lstiter_bonus.c \
							srcs/list/ft_lstmap_bonus.c \

OBJDIR					=	.objs
OBJS					=	$(addprefix ${OBJDIR}/,${SRCS:.c=.o})
INC_DIR					=	includes/
INCLUDE					=	libft.h

NAME					=	libft.a
CC						=	cc
CFLAGS					=	-Wall -Werror -Wextra
RM						=	rm -rf
AR						=	ar rcs

NORM_FLAG				=	-R CheckForbiddenSourceHeader
NORM_HEADER_FLAG		=	-R CheckDefine

all:	${NAME}

${NAME}:	${OBJS}
	${AR} ${NAME} ${OBJS}
	@echo "[DONE] Libft compilation.."

$(OBJDIR)/%.o:	%.c
	mkdir -p ${@D}
	${CC} ${CFLAGS} -c $< -o $@

norm:
	@norminette ${NORM_FLAG} ${NORM_HEADER_FLAG} ${SRCS} ${INC_DIR}${INCLUDE}

clean:
	${RM} ${OBJDIR}
	@echo "[DONE] Libft's objects deletion.."

fclean:	clean
	${RM} ${NAME}
	@echo "[DONE] Libft full deletion.."

re:	fclean all
	@echo "[DONE] Libft Recompiled.."

.PHONY: all clean fclean re
.SILENT: clean fclean
