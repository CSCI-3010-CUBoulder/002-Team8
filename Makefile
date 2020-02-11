CXX = g++
CXXFLAGS = -std=c++17 -Wall

all: UtilityFunctions

clean:
	rm UtilityFunctions.o main

UtilityFunctions: UtilityFunctions.o main.cpp
	$(CXX) $(CXXFLAGS) main.cpp UtilityFunctions.o -o main

UtilityFunctions.o: UtilityFunctions.cpp
	$(CXX) $(CXXFLAGS) -c UtilityFunctions.cpp
