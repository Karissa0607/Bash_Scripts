test_myStrings: test_myStrings.o myStrings.o
	gcc -o test_myStrings test_myStrings.o myStrings.o

test_myStrings.o: myStrings.h test_myStrings.c
	gcc -c test_myStrings.c

myStrings.o: myStrings.h myStrings.c
	gcc -c myStrings.c

clean:
	rm -f *.o test_myStrings
