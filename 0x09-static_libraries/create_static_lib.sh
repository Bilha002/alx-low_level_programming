#!/bin/bash
gcc -Wall -pendantic -werror -wextra -c *.c
ar rcs liball.a *.o
