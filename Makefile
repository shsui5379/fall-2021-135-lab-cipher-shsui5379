main: main.o caesar.o decrypt.o vectorutilities.o solve.o
	g++ -o main main.o caesar.o decrypt.o vectorutilities.o solve.o

tests: tests.o caesar.o decrypt.o vectorutilities.o solve.o
	g++ -o tests tests.o caesar.o decrypt.o vectorutilities.o solve.o


main.o: main.cpp solve.h

tests.o: tests.cpp doctest.h caesar.h decrypt.h vectorutilities.h solve.h

caesar.o: caesar.cpp caesar.h

decrypt.o: decrypt.cpp decrypt.h caesar.h

vectorutilities.o: vectorutilities.cpp vectorutilities.h

solve.o: solve.cpp solve.h decrypt.h vectorutilities.h

clean:
	rm -f main.o tests.o caesar.o decrypt.o vectorutilities.o solve.o
