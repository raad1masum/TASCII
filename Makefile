all:
	gcc src/main.c -o bin/main

install:
	gcc src/main.c -o bin/main
	sudo cp bin/main /usr/local/bin/tascii
