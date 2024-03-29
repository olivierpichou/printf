# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: opichou <opichou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/05 14:06:26 by opichou           #+#    #+#              #
#    Updated: 2016/07/01 17:27:13 by opichou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libftprintf.a
CC =		gcc
FLAGS =		-Wall -Wextra -Werror
INC =		-I./includes/
SRC = ft_printf.c \
	  \
	  ft_flags.c\
	  ft_flag_h.c ft_flag_plus.c\
	  ft_flag_space.c ft_get_flag.c\
	  \
	  ft_precision.c\
	  ft_precision_i.c\
	  \
	  ft_length.c\
	  \
	  ft_width.c\
	  \
	  ft_spec.c\
	  ft_spec_l.c ft_spec_ll.c ft_spec_h.c ft_spec_hh.c ft_spec_j.c\
	  ft_spec_z.c\
	  \
	  ft_return_free.c  ft_cast_short.c ft_get_format.c\
	  \
	  ft_putdouble.c ft_longintlen.c \
	  ft_putnbr.c ft_putnbr_fd.c ft_putnbr_hex.c \
	  \
	  ft_putchar.c ft_putchar_fd.c ft_putwchar.c ft_put_com.c\
	  \
	  ft_concat.c ft_capitalize.c ft_put_pct.c ft_ret_hex_oct.c \
	  ft_ret_i.c ft_ret_str.c ft_ret_unsigned_i.c ft_ret_wchar.c \
	  ft_ret_pointer.c ft_ret_long_hex_oct.c ft_ret_short.c ft_spec_l.c\
	  \
	  ft_usitoa_base.c ft_itoa_base.c ft_itoa.c ft_atoi.c ft_trim_atoi.c\
	  ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
	  ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c \
	  ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_goto.c ft_strstr.c \
	  ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_isalpha.c ft_isdigit.c \
	  ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
	  \
	  ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
	  ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
	  ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c \
	  ft_0.c ft_space.c\
	  ft_putstr.c ft_putendl.c \
	  ft_putstr_fd.c ft_putendl_fd.c \
	  \
	  ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstiter.c ft_lstadd.c \
	  ft_lstmap.c ft_lstaddend.c\
	  \
	  ft_numlen.c ft_abs.c ft_strxlen.c ft_strndup.c ft_lstforceadd.c
OBJ = $(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
	ar rc $@ $^
	ranlib $(NAME)

%.o: %.c
	$(CC) -o $@ $(FLAGS) $(INC) -c $^

.PHONY: all, clean, fclean, re

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
