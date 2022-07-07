CXX       := g++-11
CXX_FLAGS := -std=c++17 -ggdb

BIN     := bin
SRC     := src
INCLUDE := include
#TEST	:= test
LIBRARIES   :=
EXECUTABLE  := main

all: $(BIN)/$(EXECUTABLE)

run: clean all
	clear
	./$(BIN)/$(EXECUTABLE)

#test_unit: $(BIN)/test_unit.o $(BIN)/functions.o
#	$(CXX) $(CXX_FLAGS) -o $(BIN)/test_unit $(BIN)/test_unit.o $(BIN)/functions.o

#$(BIN)/test_unit.o: $(TEST)/test_unit.cpp $(BIN)/functions.o
#	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) -o $(BIN)/test_unit.o $(TEST)/test_unit.cpp $(BIN)/functions.o

#functions: $(SRC)/functions.cpp
#	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) -o $(BIN)/functions.o $(SRC)/functions.cpp

$(BIN)/$(EXECUTABLE): $(SRC)/*.cpp
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) $^ -o $@ $(LIBRARIES)

clean:
	rm -r $(BIN)/*