INCLUDE = ./include
SRC = ./src
TEST = ./test
GCC = g++ -std=c++11 -Wall -Wextra
OUT = ./make

NAME = how_the_compiler_reacts_to_intentional_error

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
