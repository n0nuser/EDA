CC=gcc

programa: pruebaLista.o lista.o
	$(CC) pruebaLista.o lista.o -o pruebaLista.exe

lista.o: .\listas\lista.c .\listas\lista.h
	$(CC) -c -g .\listas\lista.c

pruebaLista.o: pruebaLista.c .\listas\lista.h
	$(CC) -c -g pruebaLista.c

clean:
	$(RM) *.o