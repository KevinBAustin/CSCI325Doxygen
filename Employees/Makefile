CC = g++
CFLAGS = -g -Wall -Wextra
TARGET=employee


all: $(TARGET)

main.o: main.cpp Employee.h Officer.h Supervisor.h
	$(CC) $(CFLAGS) -c main.cpp

Employee.o: Employee.h Employee.cpp
	$(CC) $(CFLAGS) -c Employee.cpp

Officer.o: Officer.h Officer.cpp
	$(CC) $(CFLAGS) -c Officer.cpp

Supervisor.o: Supervisor.h Supervisor.cpp
	$(CC) $(CFLAGS) -c Supervisor.cpp

$(TARGET): main.o Employee.o Officer.o Supervisor.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o Employee.o Officer.o Supervisor.o

clean:
	$(RM) $(TARGET) *.o *~
