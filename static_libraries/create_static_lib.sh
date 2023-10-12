#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ac rcs liball.a *.o
ranlib liball.a
