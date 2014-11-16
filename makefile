myShell: myShell.o
	gcc -o myShell myShell.o
myShell.o: myShell.c
	gcc -c myShell.c
clean:
	rm -f *.o
