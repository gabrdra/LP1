GCC = g++
GG_FLAGS = -I include -std=c++11
PROGRAM = diary

all: $(PROGRAM)

$(PROGRAM): App.o Diary.o main.o Moment.o Date.o Time.o
	g++ -I include -std=c++11 -o diary App.o Diary.o main.o Moment.o Date.o Time.o

main.o: src/main.cpp
	g++ -I include -std=c++11 -c src/main.cpp

Diary.o: src/Diary.cpp include/Diary.h
	g++ -I include -std=c++11 -c src/Diary.cpp

Date.o: src/Date.cpp include/Date.h
	g++ -I include -std=c++11 -c src/Date.cpp

Time.o: src/Time.cpp include/Time.h
	g++ -I include -std=c++11 -c src/Time.cpp

Moment.o: src/Moment.cpp include/Moment.h
	g++ -I include -std=c++11 -c src/Moment.cpp

App.o: src/App.cpp include/App.h
	g++ -I include -std=c++11 -c src/App.cpp

clean:
	rm -f *.o $(PROGRAM)
