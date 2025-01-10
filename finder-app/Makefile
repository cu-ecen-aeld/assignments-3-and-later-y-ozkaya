
#writer: writer.o
#	$(CROSS_COMPILE)gcc -g -Wall -I/ writer.o -o writer
#
#writer.o: writer.c
#	$(CROSS_COMPILE)gcc -c writer.c -o writer.o
#
#clean:
#	rm -f writer.o writer 


CC = gcc

ifdef CROSS_COMPILE
CC = $(CROSS_COMPILE)gcc
endif

CFLAGS = -Wall -Wextra -g

SRC = writer.c
OBJ = $(SRC:.c=.o)

TARGET = writer

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJ)

.PHONY: all clean


