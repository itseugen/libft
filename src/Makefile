# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eweiberl <eweiberl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/29 15:58:47 by eweiberl          #+#    #+#              #
#    Updated: 2023/03/29 15:58:50 by eweiberl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SOURCE = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
		ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c ft_strlcpy.c ft_strlcat.c\
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c\
		ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c\
		ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
		ft_putnbr_fd.c
BINARIES = $(SOURCE:.c=.o)

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
		ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUSBIN = $(BONUS:.c=.o)

all: $(NAME)
$(NAME): $(SOURCE) $(BINARIES)
	ar rcs $(NAME) $(BINARIES)

clean:
	rm -f $(BINARIES) $(BONUSBIN)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(NAME) $(BONUS) $(BONUSBIN)
	ar rcs $(NAME) $(BINARIES) $(BONUSBIN)

.PHONY: all clean fclean re bonus