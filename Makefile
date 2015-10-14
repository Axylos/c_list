it: | clean app

app: main.o list.o 
	gcc -g -o app list.o main.o

list.o: list.c list.h
	gcc -g -c list.h list.c

main: main.c list.h
	gcc -g -c main.c list.h

clean:
	rm *.o
	rm app
