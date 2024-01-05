CFLAGS = -c -Wall -std=c++14
EXENAME = atm
CC = g++

default: main.o user.o functions.o
	$(CC) main.o user.o  functions.o -o $(EXENAME)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

user.o: user.h user.cpp
	$(CC) $(CFLAGS) user.cpp
functions.o: functions.cpp
	$(CC) $(CFLAGS) functions.cpp

clean:
	rm *.o $(EXENAME)

run:
	./$(EXENAME)