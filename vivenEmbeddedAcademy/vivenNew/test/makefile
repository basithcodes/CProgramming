final: app

app: main.o hello.o add.o
	gcc main.o hello.o add.o -o app

main.o: main.c header.h
	gcc -c main.c -o main.o

add.o: add.c header.h
	gcc -c add.c -o add.o

hello.o: hello.c header.h
	gcc -c hello.c -o hello.o

clean:
	rm -rf *.o
