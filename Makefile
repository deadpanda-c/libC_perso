SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	libperso.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	mv $(NAME) ../
clean:
	rm -rf .*.swp .*.swo *~

fclean:		clean
	rm -rf *.o ../libperso.a

re:	fclean all
