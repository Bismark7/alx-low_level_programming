#!/bin/bash
gcc -Wall -padantic -Werror -Wextra -c *.c
ar ars liball.a *.o
ranlib liball.o
