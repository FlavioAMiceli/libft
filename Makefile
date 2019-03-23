#******************************************************************************#
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: fmiceli <fmiceli@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2019/01/11 12:09:18 by fmiceli       #+#    #+#                  #
#    Updated: 2019/02/04 15:39:38 by fmiceli       ########   odam.nl          #
#                                                                              #
#******************************************************************************#

NAME=libft.a
INCL=libft.h
SRCS=ft_atoi.c ft_bzero.c ft_count_if.c ft_foreach.c ft_isalnum.c ft_isalpha.c\
	ft_isascii.c ft_isdigit.c ft_islower.c ft_isprint.c ft_isupper.c\
	ft_isspace.c ft_itoa.c ft_lstadd.c ft_lstaddback.c ft_lstdel.c\
	ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_memalloc.c\
	ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c\
	ft_memdup.c ft_memset.c ft_putchar.c ft_putchar_fd.c ft_putendl.c\
	ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c\
	ft_range.c ft_range_step.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c\
	ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c\
	ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strlower.c ft_strmap.c\
	ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c\
	ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c\
	ft_strsub.c ft_strtrim.c ft_strupper.c ft_tolower.c ft_toupper.c\
	ft_min.c ft_max.c ft_lstunlink.c ft_lstdequeue.c ft_slow_memchr.c\
	ft_lsttoarray.c ft_delcontent.c ft_itoa_base.c
OBJS:=$(SRCS:.c=.o)
FLAGS= -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :
	@gcc -c $(SRCS) -I $(INCL) $(FLAGS)
	@ar -rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean :
	@rm -f *~
	@rm -f \#*.c\#
	@rm -f *.o

fclean : clean
	@rm -f $(NAME)

re : fclean $(NAME)
