INCLUDE = ./include
SRC = ./src
TEST = ./test
GCC = g++ -std=c++11 -Wall -Wextra
OUT = ./make

NAME = time_loop_print_millisecs

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

build_release:
	$(GCC) -O2 -I$(INCLUDE) \
	$(SRC)/$(NAME).cpp ./solution/main.cc \
	-o $(OUT)/run_release.o

# EN:
# Clearing executeables.
# HU:
# Végrehajtható állományok törlése.
#
clean:
	rm $(OUT)/*.o
