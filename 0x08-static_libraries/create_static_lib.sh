#!/bin/bash
gcc -Wall -Wpedantic -Werror -Wextra *.c
ar rc liball.a *.o
