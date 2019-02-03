INCLUDE = ./include
SRC = ./src
TEST = ./test
GCC = g++ -std=c++11 -Wall -Wextra
OUT = ./make

NAME = nonportable_examples

# EN:
# Building the executeable solution.
#
# HU:
# Végrehajtható állomány előállítása.
#
build:
	$(GCC) -I$(INCLUDE) \
	$(SRC)/$(NAME).cpp ./solution/main.cc \
	-o $(OUT)/run.o

# EN:
# Clearing executeables.
# HU:
# Végrehajtható állományok törlése.
#
clean:
	rm $(OUT)/*.o
