rm = del

cm : mystrlen.o mystrcmp.o main.o
	gcc mystrlen.o mystrcmp.o main.o -o cm

mystrlen.o : ./src/mystrlen.c
	gcc -c ./src/mystrlen.c

mystrcmp.o : ./src/mystrcmp.c
	gcc -c ./src/mystrcmp.c

main.o : main.c
	gcc -c main.c 

clean : 
	@echo "clean started"
	$(rm) cm.exe
	$(rm) *.o
	@echo "clean completed"
