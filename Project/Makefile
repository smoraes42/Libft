
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

# vars
NAME	= libft.a
LIB	= libft.h
CC	= cc -g
CFLAGS	= -Wall -Werror -Wextra
ARS	= ar crs
BIN	= lbft
SRC	= ft_isalnum.c		ft_isalpha.c	ft_isascii.c	ft_strtrim.c\
	  ft_isdigit.c  	ft_isprint.c	ft_strchr.c		ft_calloc.c\
	  ft_strdup.c 		ft_strlcat.c	ft_strlcpy.c	ft_strtrim.c\
	  ft_strlen.c 		ft_strncmp.c	ft_strnstr.c	ft_strmapi.c\
	  ft_strrchr.c 		ft_tolower.c	ft_toupper.c\
	  ft_memset.c 		ft_bzero.c		ft_memcpy.c\
	  ft_memmove.c 		ft_memchr.c		ft_memcmp.c \
	  ft_strjoin.c 		ft_split.c		ft_substr.c\
	  ft_atoi.c 		ft_putchar_fd.c ft_putstr_fd.c\
	  ft_putendl_fd.c	ft_putnbr_fd.c	ft_itoa.c\
	  ft_striteri.c\
	  ft_put_uint_fd.c ft_put_ulong_fd.c ft_puthex_fd.c\

MSRC	= main.c
OBJS	= $(SRC:.c=.o)
MOBJ	= main.o
RM	= rm -rf


.PHONY: all clean fclean re
#MAKEFLAGS += --silent

# base project
all: $(NAME)

$(NAME):$(OBJS)
	$(ARS) $(NAME) $(OBJS)

%.o:%.c libft.h Makefile
	cc $(CFLAGS) -c $< -o $@
#%.o:%.c
#	cc $(CFLAGS) -c $^ -o $@

# build a main
bin: $(OBJS) $(NAME) $(MSRC) $(MOBJ)
	$(CC) $(CFLAGS) -c $(MSRC) -o $(MOBJ)
	$(CC) $(CFLAGS) $(MOBJ) $(OBJS) -o $(BIN) -L. $(NAME)
	chmod +x $(BIN)

#cleanning
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

#rebuild
re: fclean all
