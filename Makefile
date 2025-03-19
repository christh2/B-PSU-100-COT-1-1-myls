##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

CC	=	gcc
SRC	=	my_put_nbr.c	\
		my_putstr.c	\
		convert_hexa.c	\
		convert_hexa_maj.c	\
		convert_base.c	\
		convert_octal.c	\
		my_printf.c	\
		my_put_unsigned_nbr.c	\
		my_count_number.c	\
		functions.c	\
		functions2.c	\
		functions3.c	\
		putstr_s.c	\
		my_strcpy.c	\
		my_put_nbr_float.c	\
		convert_hexa_adress.c	\
		my_put_address.c	\
		convert_scientific_e.c	\
		convert_scientific_maj.c	\
		strap.c	\
		my_list.c	\
		tiret_l.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_ls

all:	$(NAME)


$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean	all

auteur:
	echo $(USER) > auteur
