all: testfile.o 
	gcc testfile.o -o target_bin
testfile.o: testfile.c
	gcc -c testfile.c
clean:
	rm -rf *.o
	rm target_bin
