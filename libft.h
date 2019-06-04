/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fmiceli <fmiceli@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 11:56:34 by fmiceli       #+#    #+#                 */
/*   Updated: 2019/02/02 16:29:06 by fmiceli       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

# define TRUE 1
# define FALSE 0
# define FT_INT_MIN -2147483648
# define FT_INT_MAX 2147483647

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_magicmask
{
	unsigned long	lomagic;
	unsigned long	himagic;
	unsigned long	word;
}					t_magicmask;

void				ft_putnbr(int n);
void				ft_putchar(char	c);

void				ft_putstr(const char *s);
void				ft_putendl(const char *s);
void				ft_strclr(char *s);

void				ft_putnbr_fd(int n, int fd);
void				ft_putchar_fd(char c, int fd);

void				ft_putstr_fd(const char *s, int fd);
void				ft_putendl_fd(const char *s, int fd);
void				ft_bzero(void *s, size_t n);

void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));

void				ft_foreach(int *tab, int len, void (*f)(int));

void				ft_memdel(void **ap);
void				ft_strdel(char **as);

int					ft_isupper(int c);
int					ft_islower(int c);
int					ft_isspace(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

int					ft_sqrt_floor(int nb);
int					ft_sqrt_ceil(int nb);

int					ft_min(int x, int y);
int					ft_max(int x, int y);

size_t				ft_strlen(const char *str);

int					ft_atoi(const char *c);

int					ft_strcmp(const char *s1, const char *s2);
int					ft_strequ(char const *s1, char const *s2);

int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);

int					ft_count_if(char **tab, int (*f)(char*));

void				*ft_memalloc(size_t size);

void				*ft_memset(void *b, int c, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_slow_memchr(const void *s, int c, size_t n);

int					*ft_range(int min, int max);
int					*ft_range_step(int min, int max, int step);

char				*ft_itoa(int n);
char				*ft_itoa_base(int value, int base);
char				*ft_strnew(size_t size);

char				*ft_strdup(const char *src);
char				*ft_strupper(char *str);
char				*ft_strlower(char *str);
char				*ft_strtrim(char const *s);

char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_memdup(char const *b, size_t n);

char				*ft_strsub(char const *s, unsigned int start, size_t len);

char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char				*ft_strcpy(char *dst, const char *src);
char				*ft_strcat(char	*s1, const char *s2);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strstr(const char *haystack, const char *needle);

void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strnstr\
					(const char *haystack, const char *needle, size_t len);

void				*ft_memccpy(void *dst, const void *src, int c, size_t n);

char				**ft_strsplit(char const *s, char c);

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstdequeue(t_list **alst);
t_list				*ft_lstunlink(t_list **head_node, t_list *to_unlink);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstappend(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));

#endif
