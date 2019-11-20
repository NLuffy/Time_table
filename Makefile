# Author: Shashank Vats
#		  Nishant Shekhar


CFLAGS = -Wall -W -g -std=c++11
CPP = g++
RM = rm -f
EXEC = app

OBJECTS = \
Main.o \
Input.o \
Output.o \
Period.o \
School.o \
Section.o \
Teacher.o \
Time.o \

all: $(OBJECTS) compile touch

Main.o: Main.cpp
		$(CPP) $(CFLAGS) -c Main.cpp

Input.o: Input.cpp
		$(CPP) $(CFLAGS) -c Input.cpp

Output.o: Output.cpp
		$(CPP) $(CFLAGS) -c Output.cpp

School.o: School.cpp
		$(CPP) $(CFLAGS) -c School.cpp

Period.o: Period.cpp
		$(CPP) $(CFLAGS) -c Period.cpp

Section.o: Section.cpp
		$(CPP) $(CFLAGS) -c Section.cpp

Teacher.o: Teacher.cpp
		$(CPP) $(CFLAGS) -c Teacher.cpp

Time.o: Time.cpp
		$(CPP) $(CFLAGS) -c Time.cpp

clean:
		$(RM) $(OBJECTS)

compile:
		$(CPP) $(CFLAGS) $(OBJECTS) -o $(EXEC)

touch:
		@echo " "
		@echo "Compilation done successfully..."
		@echo " "

