CC = g++
OBJECTS = $(SOURCES:.cpp=.o)
CFLAGS = -c
HEADER = grading2.h
SOURCES = grading2.cpp main.cpp
EXECUTABLE = grading3

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

main.o: main.cpp grading2.cpp grading2.h
	$(CC) $(CFLAGS) main.cpp

grading2.o: grading2.cpp grading2.h
	$(CC) $(CFLAGS) grading2.cpp

clean:
	rm $(EXECUTABLE) $(OBJECTS) 
