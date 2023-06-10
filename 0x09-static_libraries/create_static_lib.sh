#!/bin/bash

# compile all .c files into object file
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c

# create library
ar rcs liball.a *.o

echo "Static library liball.a created successfully."
