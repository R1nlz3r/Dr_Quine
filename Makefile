# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/14 04:31:17 by mapandel          #+#    #+#              #
#    Updated: 2018/01/14 05:15:31 by mapandel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		dr_quine

#			Compilation

CC = 		clang
CFLAGS = 	-Wall -Wextra -Werror

#			Exec

COLLEEN =	Colleen
GRACE =		Grace
SULLY =		Sully

#			Main Rules

.PHONY: all re glu clean fclean

$(NAME): $(COLLEEN) $(GRACE) $(SULLY)

all: $(NAME)

$(COLLEEN): Colleen.c
	$(CC) $(CFLAGS) -o $(COLLEEN) Colleen.c

$(GRACE): Grace.c
	$(CC) $(CFLAGS) -o $(GRACE) Grace.c

$(SULLY): Sully.c
	$(CC) $(CFLAGS) -o $(SULLY) Sully.c

re: fclean all

glu: fclean all clean

#			Clean Rules

clean:
	@rm -rf tmp_Colleen Grace_kid.c Sully_*.c

fclean: clean
	@rm -rf Colleen Grace Sully Sully_*
