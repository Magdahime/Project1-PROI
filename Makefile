#Makefile to compile second project
CFLAGS:= -Wall  -Iinclude -Isrc --debug

INCLUDE:= include
SRC := src
BUILD := build
BIN := bin

$(BIN)/PROGRAM: $(BUILD)/Main.o $(BUILD)/Group_of_students.o $(BUILD)/Student.o $(BUILD)/Interface.o $(BUILD)/Functions.o
	g++ $(BUILD)/Main.o $(BUILD)/Group_of_students.o $(BUILD)/Student.o $(BUILD)/Interface.o $(BUILD)/Functions.o -o $(BIN)/PROGRAM

$(BUILD)/Main.o: $(SRC)/Main.cpp $(INCLUDE)/Main.hpp $(INCLUDE)/Student.hpp $(INCLUDE)/Group_of_students.hpp $(INCLUDE)/Functions.hpp
	g++ $(CLFAGS) -c $(SRC)/Main.cpp -o $(BUILD)/Main.o

$(BUILD)/Group_of_students.o: $(SRC)/Group_of_students.cpp $(INCLUDE)/Main.hpp $(INCLUDE)/Group_of_students.hpp $(INCLUDE)/Functions.hpp
	g++ $(CLFAGS) -c $(SRC)/Group_of_students.cpp -o $(BUILD)/Group_of_students.o

$(BUILD)/Student.o: $(SRC)/Student.cpp $(INCLUDE)/Main.hpp $(INCLUDE)/Student.hpp $(INCLUDE)/Functions.hpp
	g++ $(CLFAGS) -c $(SRC)/Student.cpp -o $(BUILD)/Student.o

$(BUILD)/Interface.o: $(SRC)/Interface.cpp $(INCLUDE)/Main.hpp $(INCLUDE)/Functions.hpp
	g++ $(CFLAGS) -c $(SRC)/Interface.cpp -o $(BUILD)/Interface.o

$(BUILD)/Functions.o: $(SRC)/Functions.cpp $(INCLUDE)/Main.hpp $(INCLUDE)/Student.hpp $(INCLUDE)/Group_of_students.hpp $(INCLUDE)/Functions.hpp
	g++ $(CFLAGS) -c $(SRC)/Functions.cpp -o $(BUILD)/Functions.o

clean:
	rm -f $(BUILD)/*.o
	rm -f $(BIN)/PROGRAM
	rm -f $(BIN)/TEST

TEST: $(BUILD)/MainT.o $(BUILD)/Group_of_students.o $(BUILD)/Student.o $(BUILD)/Interface.o $(BUILD)/Functions.o
	g++ $(BUILD)/MainT.o $(BUILD)/Group_of_students.o $(BUILD)/Student.o $(BUILD)/Interface.o $(BUILD)/Functions.o -o $(BIN)/TEST

$(BUILD)/MainT.o: $(SRC)/Main.cpp $(INCLUDE)/Main.hpp $(INCLUDE)/Student.hpp $(INCLUDE)/Group_of_students.hpp $(INCLUDE)/Functions.hpp
	g++  -DTEST=1 $(CLFAGS) -c $(SRC)/Main.cpp -o $(BUILD)/MainT.o
