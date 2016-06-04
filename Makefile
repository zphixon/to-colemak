CC = gcc
CFLAGS = -Wall -pedantic
LIBS = -lreadline

all: colemak.c
	mkdir -p bin
	$(CC) $(CFLAGS) $(LIBS) -o bin/to-colemak colemak.c

clean:
	rm -rf bin/
	rm -f /usr/bin/to-colemak

install: colemak.c
	mkdir -p bin
	$(CC) $(CFLAGS) $(LIBS) -o bin/to-colemak colemak.c
	mv bin/to-colemak /usr/bin/to-colemak
	rm -rf bin/

debug: colemak.c
	mkdir -p bin
	$(CC) $(CFLAGS) -g $(LIBS) -o bin/to-colemak colemak.c

