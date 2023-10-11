# rm = del
# TARGET = cm


# ${TARGET} : mystrlen.o mystrcmp.o mystrcpy.o mystrcat.o reverse.o main.o
# 	gcc mystrlen.o mystrcmp.o mystrcpy.o mystrcat.o reverse.o main.o -o ${TARGET}

# mystrlen.o : ./src/mystrlen.c
# 	gcc -c ./src/mystrlen.c

# mystrcmp.o : ./src/mystrcmp.c
# 	gcc -c ./src/mystrcmp.c

# mystrcpy.o : ./src/mystrcpy.c
# 	gcc -c ./src/mystrcpy.c

# mystrcat.o : ./src/mystrcat.c
# 	gcc -c ./src/mystrcat.c

# reverse.o : ./src/reverse.c
# 	gcc -c ./src/reverse.c

# main.o : main.c
# 	gcc -c main.c 

# clean : 
# 	@echo "clean started"
# 	$(rm) cm.exe
# 	$(rm) *.o *.d
# 	@echo "clean completed"

# Makefile for a C project with multiple source files and a "build" directory

# Compiler and compiler flags
CC = gcc
CFLAGS = -Wall -g
RM := rd /s /q

# Source file directory
SRC_DIR = src
# Build directory
BUILD_DIR = build

# List of source files (all .c files in SRC_DIR)
SOURCES = main.c $(wildcard $(SRC_DIR)/*.c)

# Object files derived from source files
OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SOURCES))

# Executable name
TARGET = myprogram

# Default target (first target in the file)
all: $(BUILD_DIR)/$(TARGET)

# Rule to build the executable
$(BUILD_DIR)/$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to build object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c -o $@ $<

# Create the build directory if it doesn't exist
$(BUILD_DIR):
	mkdir $(BUILD_DIR)

# Clean up the project
clean:
	${RM} $(BUILD_DIR)

.PHONY: all clean
