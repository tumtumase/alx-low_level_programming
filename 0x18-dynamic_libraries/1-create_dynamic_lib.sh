#!/bin/bash

# Compile all .c files to object files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c *.c

# Create the dynamic library from all .o files
gcc -shared -o liball.so *.o

# Clean up - remove .o files
rm *.o
