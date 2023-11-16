CFLAGS = -c -Wall -std=c++14
EXENAME = atm
CC = g++

default: main.o user.o
	$(CC) main.o user.o -o $(EXENAME)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

user.o: user.h user.cpp
	$(CC) $(CFLAGS) user.cpp

clean:
	rm *.o $(EXENAME)

run:
	./$(EXENAME)