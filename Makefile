CXX = g++
CXXFLAGS = -std=c++17 -Wall

all: UtilityFunctions test

clean:
	rm UtilityFunctions.o main test

UtilityFunctions: UtilityFunctions.o main.cpp
	$(CXX) $(CXXFLAGS) main.cpp UtilityFunctions.o -o main

UtilityFunctions.o: UtilityFunctions.cpp
	$(CXX) $(CXXFLAGS) -c UtilityFunctions.cpp

test: UtilityFunctions.o test.cpp
	$(CXX) $(CXXFLAGS) test.cpp UtilityFunctions.o -o test
