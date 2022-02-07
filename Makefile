##
## Amaury PROJECT, 2022
## A-3D-Engine [WSL: Ubuntu-20.04]
## File description:
## Makefile
##

SRC	=	src/A3D-Engine.cpp	\
		src/3Dobj.cpp

all:
	g++ -c -fpic $(SRC) && gcc -shared -o A3D-Engine.so *.o && rm *.o

clean:
	rm -rf *.o *.a

fclean: clean
	rm -rf $(NAME)

re: clean all

.PHONY: all clean fclean re