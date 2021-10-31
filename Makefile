main: main.o caesar.o decrypt.o
	g++ -o main main.o caesar.o decrypt.o

tests: tests.o caesar.o decrypt.o vectorutilities.o
	g++ -o tests tests.o caesar.o decrypt.o vectorutilities.o


main.o: main.cpp caesar.h

tests.o: tests.cpp doctest.h caesar.h

caesar.o: caesar.cpp caesar.h

decrypt.o: decrypt.cpp decrypt.h caesar.h

vectorutilities.o: vectorutilities.cpp vectorutilities.h

clean:
	rm -f main.o tests.o caesar.o decrypt.o
