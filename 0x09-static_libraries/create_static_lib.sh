#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar ars liball.a *.o
ranlib liball.o
