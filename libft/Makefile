# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjoanne <cjoanne@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/21 12:30:03 by cjoanne           #+#    #+#              #
#    Updated: 2021/04/22 21:59:10 by cjoanne          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =		ft_isdigit.c		ft_memccpy.c		ft_memcmp.c\
			ft_memcpy.c			ft_memset.c			ft_putchar_fd.c\
			ft_memchr.c			ft_bzero.c			ft_atoi.c\
			ft_isalpha.c		ft_memmove.c		ft_putstr_fd.c\
			ft_strmapi.c		ft_strlen.c			ft_strncmp.c\
			ft_tolower.c		ft_toupper.c		ft_isalnum.c\
			ft_putendl_fd.c		ft_isprint.c		ft_itoa.c\
			ft_putnbr_fd.c		ft_strchr.c			ft_strdup.c\
			ft_strlcat.c		ft_strlcpy.c		ft_strrchr.c\
			ft_strnstr.c		ft_isascii.c\
			$(SRCS_B)

SRCS_B =	ft_lstnew.c			ft_lstdelone.c

OBJS = $(patsubst %.c,%.o,$(SRCS))
OBJS_B = $(patsubst %.c,%.o,$(SRCS_B))

D_FILES = $(patsubst %.c,%.d,$(SRCS))

OPTFLAGS = -O2
FLAGS = -Wall -Wextra -Werror 

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $?

%.o : %.c
	gcc $(FLAGS) $(OPTFLAGS) -c $< -o $@ -MD

include $(wildcard $(D_FILES))

bonus : 
	make OBJS="$(OBJS_B)" all

clean :
	rm -f $(OBJS) $(D_FILES)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re