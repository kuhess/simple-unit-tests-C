CFLAGS=-W -Wall -ansi -pedantic

default: dummy test

dummy: dummy.o main.o
	gcc -o bin/dummy build/dummy.o build/main.o $(CFLAGS)

dummy.o: src/dummy.c
	gcc -o build/dummy.o -c src/dummy.c $(CFLAGS)

main.o: src/main.c src/dummy.h
	gcc -o build/main.o -c src/main.c $(CFLAGS)

test: test_dummy.o unity.o dummy.o
	gcc -o bin/test_dummy build/test_dummy.o build/unity.o build/dummy.o -Iunity/src -Isrc $(CFLAGS)

test_dummy.o: test/test_dummy.c dummy.o src/dummy.h
	gcc -o build/test_dummy.o -c test/test_dummy.c -Iunity/src -Isrc $(CFLAGS)

unity.o: unity/src/unity.c
	gcc -o build/unity.o -c unity/src/unity.c $(CFLAGS)

.PHONY: clean

clean:
	$(RM) build/* bin/*
