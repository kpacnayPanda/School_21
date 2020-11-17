# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrosette <mrosette@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/29 15:50:15 by mrosette          #+#    #+#              #
#    Updated: 2020/11/17 15:15:35 by mrosette         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

SRC		= ft_strlen.c ft_isalpha.c ft_strlcpy.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strnstr.c \
		ft_isprint.c ft_tolower.c ft_toupper.c ft_strncmp.c ft_atoi.c ft_strchr.c ft_strrchr.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_strlcat.c \
		ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \


BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
			ft_lstclear.c ft_lstiter.c ft_lstmap.c \

OBJ		= $(SRC:.c=.o)
BONUS_OBJS = $(BONUS_SRC:.c=.o)

INC		= libft.h

NAME 	= libft.a

all:	$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

bonus: $(OBJ) $(BONUS_OBJS)
	ar rc $(NAME) $(OBJ) $(BONUS_OBJS)
clean:
	rm -f $(OBJ)
	rm -f $(BONUS_OBJS)
fclean: clean
		rm -f $(NAME)
re:		fclean all

.PHONY: clean fclean all re
