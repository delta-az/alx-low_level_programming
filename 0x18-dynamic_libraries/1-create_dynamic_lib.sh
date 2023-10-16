#!/bin/bash
gcc -c -Fpic *.c
gcc -shared -o liball.so *.o
