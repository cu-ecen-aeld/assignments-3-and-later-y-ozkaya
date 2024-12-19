
writer: writer.o
	$(CROSS_COMPILE)gcc -g -Wall -I/ writer.o -o writer

writer.o: writer.c
	$(CROSS_COMPILE)gcc -c writer.c -o writer.o

clean:
	rm $(wildcard *.o) 



