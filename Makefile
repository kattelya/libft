# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/12 02:34:16 by kaanggas          #+#    #+#              #
#    Updated: 2018/10/19 15:24:44 by kaanggas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all: $(NAME)

$(NAME): ft_isdigit.o ft_memset.o ft_strchr.o ft_strcmp.o ft_strncmp.o ft_strcpy.o \
	ft_strncpy.o ft_strdup.o ft_strlen.o ft_tolower.o ft_toupper.o ft_putstr.o \
	ft_putchar.o ft_putendl.o ft_putnbr.o ft_putchar_fd.o ft_putstr_fd.o \
	ft_putendl_fd.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memchr.o \
	ft_isalpha.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_atoi.o ft_strcat.o \
	ft_strncat.o ft_memalloc.o ft_memdel.o ft_putnbr_fd.o ft_strnew.o ft_strequ.o \
	ft_strnequ.o ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o 
		ar rc $(NAME) *.o 
		ranlib $(NAME)

ft_isdigit.o: ft_isdigit.c
	gcc -Wall -Wextra -Werror -c -o ft_isdigit.o ft_isdigit.c
ft_memset.o: ft_memset.c
	gcc -Wall -Wextra -Werror -c -o ft_memset.o ft_memset.c
ft_bzero.o: ft_bzero.c
	gcc -Wall -Wextra -Werror -c -o ft_bzero.o ft_bzero.c
ft_memcpy.o: ft_memcpy.c
	gcc -Wall -Wextra -Werror -c -o ft_memcpy.o ft_memcpy.c
ft_memccpy.o: ft_memccpy.c
	gcc -Wall -Wextra -Werror -c -o ft_memccpy.o ft_memccpy.c
ft_memmove.o: ft_memmove.c
	gcc -Wall -Wextra -Werror -c -o ft_memmove.o ft_memmove.c
ft_memchr.o: ft_memchr.c
	gcc -Wall -Wextra -Werror -c -o ft_memchr.o ft_memchr.c
ft_memcmp.o: ft_memcmp.c
	gcc -Wall -Wextra -Werror -c -o ft_memcmp.o ft_memcmp.c
ft_strchr.o: ft_strchr.c
	gcc -Wall -Wextra -Werror -c -o ft_strchr.o ft_strchr.c
ft_strcmp.o: ft_strcmp.c
	gcc -Wall -Wextra -Werror -c -o ft_strcmp.o ft_strcmp.c
ft_strncmp.o: ft_strcmp.c
	gcc -Wall -Wextra -Werror -c -o ft_strncmp.o ft_strncmp.c
ft_strcpy.o: ft_strcpy.c
	gcc -Wall -Wextra -Werror -c -o ft_strcpy.o ft_strcpy.c
ft_strncpy.o: ft_strncpy.c
	gcc -Wall -Wextra -Werror -c -o ft_strncpy.o ft_strncpy.c
ft_strdup.o: ft_strdup.c
	gcc -Wall -Wextra -Werror -c -o ft_strdup.o ft_strdup.c
ft_strlen.o: ft_strlen.c
	gcc -Wall -Wextra -Werror -c -o ft_strlen.o ft_strlen.c
ft_tolower.o: ft_tolower.c
	gcc -Wall -Wextra -Werror -c -o ft_tolower.o ft_tolower.c 
ft_toupper.o: ft_toupper.c
	gcc -Wall -Wextra -Werror -c -o ft_toupper.o ft_toupper.c
ft_putstr.o: ft_putstr.c
	gcc -Wall -Wextra -Werror -c -o ft_putstr.o ft_putstr.c
ft_putendl.o: ft_putendl.c
	gcc -Wall -Wextra -Werror -c -o ft_putendl.o ft_putendl.c
ft_putchar.o: ft_putchar.c
	gcc -Wall -Wextra -Werror -c -o ft_putchar.o ft_putchar.c
ft_putnbr.o: ft_putnbr.c
	gcc -Wall -Wextra -Werror -c -o ft_putnbr.o ft_putnbr.c
ft_putchar_fd.o: ft_putchar_fd.c
	gcc -Wall -Wextra -Werror -c -o ft_putchar_fd.o ft_putchar_fd.c
ft_putstr_fd.o: ft_putstr_fd.c
	gcc -Wall -Wextra -Werror -c -o ft_putstr_fd.o ft_putstr_fd.c
ft_putendl_fd.o: ft_putendl_fd.c
	gcc -Wall -Wextra -Werror -c -o ft_putendl_fd.o ft_putendl_fd.c
ft_putnbr_fd.o: ft_putnbr.c
	gcc -Wall -Wextra -Werror -c -o ft_putnbr_fd.o ft_putnbr_fd.c
ft_isalpha.o: ft_isalpha.c
	gcc -Wall -Wextra -Werror -c -o ft_isalpha.o ft_isalpha.c
ft_isalnum.o: ft_isalnum.c
	gcc -Wall -Wextra -Werror -c -o ft_isalnum.o ft_isalnum.c
ft_isascii.o: ft_isascii.c
	gcc -Wall -Wextra -Werror -c -o ft_isascii.o ft_isascii.c
ft_isprint.o: ft_isprint.c
	gcc -Wall -Wextra -Werror -c -o ft_isprint.o ft_isprint.c
ft_strcat.o: ft_strcat.c
	gcc -Wall -Wextra -Werror -c -o ft_strcat.o ft_strcat.c
ft_strncat.o: ft_strncat.c
	gcc -Wall -Wextra -Werror -c -o ft_strncat.o ft_strncat.c
ft_atoi.o: ft_atoi.c
	gcc -Wall -Wextra -Werror -c -o ft_atoi.o ft_atoi.c
ft_memalloc.o: ft_memalloc.c
	gcc -Wall -Wextra -Werror -c -o ft_memalloc.o ft_memalloc.c
ft_memdel.o: ft_memdel.c
	gcc -Wall -Wextra -Werror -c -o ft_memdel.o ft_memdel.c
ft_strnew.o: ft_strnew.c
	gcc -Wall -Wextra -Werror -c -o ft_strnew.o ft_strnew.c
ft_strdel.o: ft_strdel.c
	gcc -Wall -Wextra -Werror -c -o ft_strdel.o ft_strdel.c
ft_strclr.o: ft_strclr.c
	gcc -Wall -Wextra -Werror -c -o ft_strclr.o ft_strclr.c
ft_striter.o: ft_striter.c
	gcc -Wall -Wextra -Werror -c -o ft_striter.o ft_striter.c
ft_striteri.o: ft_striteri.c
	gcc -Wall -Wextra -Werror -c -o ft_striteri.o ft_striteri.c
ft_strequ.o: ft_strequ.c
	gcc -Wall -Wextra -Werror -c -o ft_strequ.o ft_strequ.c
ft_strnequ.o: ft_strnequ.c
	gcc -Wall -Wextra -Werror -c -o ft_strnequ.o ft_strnequ.c

clean:
	/bin/rm -f ft_isdigit.o ft_memset.o ft_strchr.o ft_strcmp.o ft_strncmp.o \
			ft_strcpy.o ft_strncpy.o ft_strdup.o ft_strlen.o ft_tolower.o \
			ft_toupper.o ft_putstr.o ft_putendl.o ft_putchar.o ft_putnbr.o \
			ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_bzero.o ft_memcpy.o \
			ft_memccpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_isalpha.o \
			ft_isalnum.o ft_isascii.o ft_isprint.o ft_atoi.o ft_strcat.o \
			ft_memalloc.o ft_strncat.o ft_memdel.o ft_strlcat.o ft_strnew.o \
			ft_putnbr_fd.o ft_strequ.o ft_strnequ.o ft_strdel.o ft_strclr.o ft_striter.o \
			ft_striteri.o	

fclean: clean
		/bin/rm -f $(NAME)
	
re: fclean all
