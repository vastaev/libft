NAME = libft.a

SRCS =  ft_charcmp.c		ft_isdigit.c		ft_islower.c\
		ft_isspace.c		ft_isupper.c		ft_memcmp.c\
		ft_memcpy.c			ft_memset.c			ft_putchar_fd.c\
				ft_bzero.c			ft_atoi.c\
		ft_isalpha.c		ft_lstnew.c

SRCS_B = 

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