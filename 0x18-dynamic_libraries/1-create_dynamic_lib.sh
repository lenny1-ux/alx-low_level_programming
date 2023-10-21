#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -g -fPIC *.c -shared -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
