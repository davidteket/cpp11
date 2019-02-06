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

NAME = swap

# EN:
# Building executeable test case.
#
# HU:
# Végrehajtható teszt eset előállítása.
#
unittest:
	$(GCC) -I$(INCLUDE) -I$(GOOGLE_TEST_PATH)/googletest/include \
	-L$(GOOGLE_TEST_LIB_PATH) \
	$(SRC)/$(NAME).cpp $(TEST)/$(NAME)_unittest.cc \
	-lgtest_main -lpthread$^ \
	-o $(OUT)/test.o

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
