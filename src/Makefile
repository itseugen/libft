# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eweiberl <eweiberl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/22 09:03:22 by eweiberl          #+#    #+#              #
#    Updated: 2023/03/25 15:33:14 by eweiberl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
SOURCE = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c
BINARIES = $(SOURCE:.c=.o)


all: $(NAME)
$(NAME): compile
	ar -cvq libft.a $(BINARIES)

compile:
	$(CC) $(FLAGS) -c $(SOURCE)

clean:
	rm -f $(BINARIES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re