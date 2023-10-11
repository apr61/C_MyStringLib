# Makefile for a C project with multiple source files and a "build" directory

# Compiler and compiler flags
CC = gcc
CFLAGS = -Wall -g
rm := rd /s /q

# Source file directory
SRC_DIR = src
# Build directory
BUILD_DIR = build

# List of source files (all .c files in SRC_DIR)
SOURCES = $(wildcard $(SRC_DIR)/*.c)

# Object files derived from source files
OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SOURCES))

# Executable name
EXECUTABLE = myprogram

# Default target (first target in the file)
all: $(BUILD_DIR)/$(EXECUTABLE)

# Rule to build the executable
$(BUILD_DIR)/$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to build object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c -o $@ $<

# Create the build directory if it doesn't exist
$(BUILD_DIR):
	mkdir $(BUILD_DIR)

# Clean up the project
clean:
	${rm} $(BUILD_DIR)

.PHONY: all clean
