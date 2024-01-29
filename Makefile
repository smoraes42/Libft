# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/14 05:19:01 by smoraes-          #+#    #+#              #
#    Updated: 2024/01/28 16:33:50 by smoraes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# vars
NAME	= libft.a
LIB		= libft.h
CC		= cc -g
CFLAGS	= -Wall -Werror -Wextra
ARS		= ar crs
BIN		= lbft
SRC	= Project/ft_isalnum.c		Project/ft_isalpha.c	Project/ft_isascii.c\
	  Project/ft_isdigit.c  	Project/ft_isprint.c	Project/ft_strchr.c\
	  Project/ft_strdup.c 		Project/ft_strlcat.c	Project/ft_strlcpy.c\
	  Project/ft_strlen.c 		Project/ft_strncmp.c	Project/ft_strnstr.c \
	  Project/ft_strrchr.c 		Project/ft_tolower.c	Project/ft_toupper.c\
	  Project/ft_memset.c 		Project/ft_bzero.c		Project/ft_memcpy.c\
	  Project/ft_memmove.c 		Project/ft_memchr.c		Project/ft_memcmp.c \
	  Project/ft_strjoin.c 		Project/ft_substr.c		Project/ft_calloc.c\
	  Project/ft_atoi.c 		Project/ft_putchar_fd.c Project/ft_putstr_fd.c\
	  Project/ft_putendl_fd.c	Project/ft_putnbr_fd.c	Project/ft_itoa.c\
	  Project/ft_striteri.c		Project/ft_strmapi.c Project/ft_strtrim.c\
	  Project/ft_split.c	


MSRC	= main.c
OBJS	= $(SRC:.c=.o)
MOBJ	= main.o
RM		= rm -rf

.PHONY: all clean fclean re
#MAKEFLAGS += --silent

# base project
all: $(NAME)

$(NAME):$(OBJS)
	$(ARS) $(NAME) $(OBJS)

%.o:%.c libft.h Makefile
	cc $(CFLAGS) -c $< -o $@

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

re: fclean all
