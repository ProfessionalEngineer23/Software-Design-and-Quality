# Makefile for building C and C++ programs

# Compilers and flags
CC := gcc
CXX := g++
CFLAGS := -Wall -Wextra -O2 -g
CXXFLAGS := -Wall -Wextra -O2 -g

# Source files
C_SRC := ../src/Digit_Counter.c
CPP_SRC := ../src/Random_Number.cpp

# Output directory
BIN_DIR := ../bin

# Target executables
C_TARGET := $(BIN_DIR)/Digit_Counter.exe
CPP_TARGET := $(BIN_DIR)/Random_Number.exe

# Build rules
all: $(C_TARGET) $(CPP_TARGET)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(C_TARGET): $(BIN_DIR) $(C_SRC)
	$(CC) $(CFLAGS) $(C_SRC) -o $(C_TARGET)

$(CPP_TARGET): $(BIN_DIR) $(CPP_SRC)
	$(CXX) $(CXXFLAGS) $(CPP_SRC) -o $(CPP_TARGET)

# Run rules
run_digit: $(C_TARGET)
	$(C_TARGET)

run_random: $(CPP_TARGET)
	$(CPP_TARGET)

# Clean rule
clean:
	rm -f $(C_TARGET) $(CPP_TARGET)

# Phony targets
.PHONY: all run_digit run_random clean

# Usage:
# make -C make        # builds both programs
# make -C make run_digit    # runs Digit_Counter
# make -C make run_random   # runs Random_Number
# make -C make clean  # cleans all binaries