#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ac -rc liball.a *.o
ranlib liball.a
