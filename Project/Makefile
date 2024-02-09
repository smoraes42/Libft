
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/14 05:19:01 by smoraes-          #+#    #+#              #
#    Updated: 2024/01/19 23:10:04 by smoraes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Vars
CC			= cc -g
RM			= rm -rf
ARS			= ar crs
HEAD		= libft.h
NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra
#HEAD_BONUS	= libft_bonus.h
#MAKEFLAGS += --silent
.PHONY:		all clean fclean re



# Mandatory Part
SRC	=\
	ft_isalnum.c	ft_isalpha.c	ft_isascii.c	ft_strtrim.c\
	ft_isdigit.c	ft_isprint.c	ft_strchr.c		ft_calloc.c\
	ft_strdup.c		ft_strlcat.c	ft_strlcpy.c	ft_strtrim.c\
	ft_strlen.c		ft_strncmp.c	ft_strnstr.c	ft_strmapi.c\
	ft_strrchr.c	ft_tolower.c	ft_toupper.c	ft_memset.c\
	ft_bzero.c		ft_memcpy.c		ft_memmove.c	ft_memchr.c\
	ft_memcmp.c		ft_strjoin.c	ft_split.c		ft_substr.c\
	ft_atoi.c		ft_putchar_fd.c ft_putstr_fd.c	ft_putendl_fd.c\
	ft_putnbr_fd.c	ft_itoa.c		ft_striteri.c
	  
OBJS 		= $(SRC:.c=.o)

# Bonus Part
BONUS_SRC 	=\
	ft_lstnew_bonus.c\

BONUS_OBJS 	= $(BONUS_SRC:.c=.o) 

all: $(NAME)

$(NAME):$(OBJS)
	$(ARS) $(NAME) $(OBJS)

%.o:%.c libft.h Makefile
	cc $(CFLAGS) -c $< -o $@

# Bonus Part
bonus: $(NAME) $(BONUS_OBJS)
	$(ARS) $(NAME) $(BONUS_OBJS)

#cleanning
clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME) *.out *.a *.s *.i *.bc

#rebuild
re: fclean all
