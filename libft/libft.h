#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_charcmp(char c1, char c2);
int		ft_isdigit(int c);
int		ft_islower(int c);
int		ft_isspace(int c);
int		ft_isupper(int c);
size_t	ft_strlen(const char *s);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_bzero(void *s, size_t n);
int		ft_isalpha(int c);
t_list	*ft_lstnew(void *content);

#endif