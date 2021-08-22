# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dalves-p <dalves-p@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/05 14:20:03 by dalves-p          #+#    #+#              #
#    Updated: 2021/08/19 15:22:45 by dalves-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	clang
SRCS	=	ft_printf.c ft_printf_chr.c ft_printf_nbr.c ft_printf_hex.c ft_format.c ft_printf_flags.c
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	libftprintf.a
RM		=	rm -f
OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			make -C libft/
			ar rcs $(NAME) $(OBJS) libft/*.o

.c.o:
			$(CC) $(CFLAGS) -c $<

clean:
			$(RM) $(OBJS)

bonus:		all

fclean:		clean
			$(RM) $(NAME)
			$(RM) *.out
			make fclean -C libft/

re:			fclean all

.PHONY:		all clean fclean re
