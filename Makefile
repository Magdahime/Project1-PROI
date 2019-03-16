#Makefile to compile second project
CFLAGS:= -Wall --debug -Iinclude -Isrc

INCLUDE := include
SRC := src
BUILD := build
BIN := bin

$(BIN)/PROGRAM: $(BUILD)/Main.o $(BUILD)/Group_of_students.o $(BUILD)/Student.o $(BUILD)/Interface.o
	g++ $(BUILD)/Main.o $(BUILD)/Group_of_students.o $(BUILD)/Student.o $(BUILD)/Interface.o -o $(BIN)/PROGRAM

$(BUILD)/Main.o: $(SRC)/Main.cpp $(INCLUDE)/Main.h $(INCLUDE)/Student.h $(INCLUDE)/Group_of_students.h $(INCLUDE)/Functions.h
	g++ $(CLFAGS) -c $(SRC)/Main.cpp -o $(BUILD)/Main.o

$(BUILD)/Group_of_students.o: $(SRC)/Group_of_students.cpp $(INCLUDE)/Main.h $(INCLUDE)/Group_of_students.h $(INCLUDE)/Functions.h
	g++ $(CLFAGS) -c $(SRC)/Group_of_students.cpp -o $(BUILD)/Group_of_students.o

$(BUILD)/Student.o: $(SRC)/Student.cpp $(INCLUDE)/Main.h $(INCLUDE)/Student.h
	g++ $(CLFAGS) -c $(SRC)/Student.cpp -o $(BUILD)/Student.o

$(BUILD)/Interface.o: $(SRC)/Interface.cpp $(INCLUDE)/Main.h $(INCLUDE)/Functions.h
	g++ $(CFLAGS) -c $(SRC)/Interface.cpp -o $(BUILD)/Interface.o
clean:
	rm -f $(BUILD)/*.o
	rm -f $(BIN)/PROGRAM

