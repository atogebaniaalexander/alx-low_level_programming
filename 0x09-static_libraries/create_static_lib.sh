#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create static library from object files
ar rcs liball.a *.o

# Clean up object files
rm *.o

