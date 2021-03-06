.PHONY: main Doxyfile html test judge clean
SRC_DIR = ./source
TOOLS_DIR = $(SRC_DIR)/tools
JUDGE_DIR = ./judge

all: main

Doxyfile:
	doxygen -g

html: Doxyfile $(SRC_DIR)/Oil.h $(SRC_DIR)/Oil.cpp $(SRC_DIR)/main.cpp $(SRC_DIR)/UnitTests.cpp
	doxygen Doxyfile

main: $(SRC_DIR)/Oil.h $(SRC_DIR)/Oil.cpp $(SRC_DIR)/main.cpp
	g++ -pedantic -std=c++11 -Wall $(filter %.cpp, $^) -o main

test: $(SRC_DIR)/Oil.h $(SRC_DIR)/Oil.cpp $(SRC_DIR)/UnitTests.cpp
	g++ -pedantic -std=c++11 -Wall $(filter %.cpp, $^) -o test -lgtest -lgtest_main -lpthread

judge: $(SRC_DIR)/main.cpp $(SRC_DIR)/Oil.cpp
	@mkdir -p judge
	@sed -e '/#include "prints.h"/d' $(SRC_DIR)/Oil.cpp > $(JUDGE_DIR)/Oil.cpp
	@grep -A500 "int main" $(SRC_DIR)/main.cpp >> $(JUDGE_DIR)/Oil.cpp

clean:
	rm -f ./main
	rm -f ./test
	rm -f -r ./judge
	rm -f ./temp.txt
	rm -f -r ./latex
	rm -f -r ./html
	rm -f ./Doxyfile
