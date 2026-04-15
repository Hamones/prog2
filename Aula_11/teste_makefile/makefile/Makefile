foo: main.o greeter.o
	cc -o foo main.o greeter.o

main.o: main.c
	cc -c -Wall -Wextra -Werror -o main.o main.c

greeter.o: greeter.c
	cc -c -Wall -Wextra -Werror -o greeter.o greeter.c
