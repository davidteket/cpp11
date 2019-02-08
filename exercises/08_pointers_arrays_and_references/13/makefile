INCLUDE = ./include
SRC = ./src
TEST = ./test
GCC = g++ -std=c++11 -Wall -Wextra
OUT = ./solution

# EN:
# Building the executeable solution.
#
# HU:
# Végrehajtható állomány előállítása.
#
indexed:
	$(GCC) -I$(INCLUDE) \
	./solution/indexed_main.cc \
	-o $(OUT)/$@.obj

pointered:
	$(GCC) -I$(INCLUDE) \
	./solution/pointered_main.cc \
	-o $(OUT)/$@.obj

indexed_optimized:
	$(GCC) -O2 -I$(INCLUDE) \
	./solution/indexed_main.cc \
	-o $(OUT)/$@.obj

pointered_optimized:
	$(GCC) -O2 -I$(INCLUDE) \
	./solution/pointered_main.cc \
	-o $(OUT)/$@.obj

# EN:
# Clearing executeables.
# HU:
# Végrehajtható állományok törlése.
#
clean:
	rm $(OUT)/*.obj
