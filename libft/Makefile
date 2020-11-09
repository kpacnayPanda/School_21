# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrosette <mrosette@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/29 15:50:15 by mrosette          #+#    #+#              #
#    Updated: 2020/11/09 16:27:53 by mrosette         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

SRC		= ft_strlen.c ft_isalpha.c ft_strlcpy.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strnstr.c \
		ft_isprint.c ft_tolower.c ft_toupper.c ft_strncmp.c ft_atoi.c ft_strchr.c ft_strrchr.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_strlcat.c \
		ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \


OBJ		= $(SRC:.c=.o)

INC		= libft.h

NAME 	= libft.a

all:	$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
clean:
	rm -rf *.o
fclean: clean
		rm $(NAME)
re:		fclean all
