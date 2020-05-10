# Makefile for gtest examples

GOOGLE_TEST_LIB = gtest
GOOGLE_TEST_INCLUDE = /usr/local/include

G++ = g++
G++_FLAGS = -c -Wall -I $(GOOGLE_TEST_INCLUDE)
LD_FLAGS = -L /usr/local/lib -l $(GOOGLE_TEST_LIB) -l pthread

OBJECTS = main.o 2_sample_unit_test/string_compare.o
TARGET = 2_sample_unit_test/string_compare

build: $(TARGET)

string_compare: $(OBJECTS)
	g++ -o $(TARGET) $(OBJECTS) $(LD_FLAGS)

%.o : %.cc
	$(G++) $(G++_FLAGS) $<

clean:
	rm -f $(TARGET) $(OBJECTS)

test: build
	./2_sample_unit_test/string_compare

.PHONY: build clean
