#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
arr -rc liball.a *.o
ranlib liball.a
