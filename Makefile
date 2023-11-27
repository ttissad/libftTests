# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 11:35:04 by tissad            #+#    #+#              #
#    Updated: 2023/11/27 11:10:30 by tissad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-Wall -Wextra -Werror
SOURCES= main.c\
ft_strtrim_tests.c\
ft_lstmap_tests.c\
ft_lstnew_tests.c\
ft_lstadd_front_tests.c\
utils_printfunctions.c\
utils_lstfunctions.c

OBJECTS= $(SOURCES:.c=.o)
EXEC=libft_tests.out
RM= rm -f
LIB=../libft.a

all: $(EXEC)

$(EXEC): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^  $(LIB)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS)
fclean: clean
	$(RM) $(EXEC)
re: fclean all

.PHONY: all clean fclean re
