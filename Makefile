.PHONY: all

g = g++
flags = -Wall -c

all: bin/main

bin/main: build/main.o build/deposit.o 
	$(g) $^ -o bin/main

build/src/main.o:
	$(g)  $(flags) src/main.cpp -o $@

build/src/deposit.o:
	$(g)  $(flags) src/deposit.cpp -o $@


clean:
	rm -rf bin/main
	rm -rf build/*.o