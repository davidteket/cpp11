# EN:
# Useful constants.
#
# HU:
# Hasznos állandók.
#
GOOGLE_TEST_PATH = /home/dt/2019/c++11/googletest
GOOGLE_TEST_LIB_PATH = /home/dt/2019/c++11/googletest/googletest/make
GOOGLE_TEST_LIBS = libgtest.a libgtest_main.a

INCLUDE = ./include
SRC = ./src
TEST = ./test
GCC = g++ -std=c++11 -Wall -Wextra
OUT = ./make

NAME = pointer_array_const

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
