#!/bin/bash
gcc mylib.c -c -fPIC && gcc *.o -shared -o libcrack.so
 LD_PRELOAD=/$PWD/libcrack.so ./gm 9 8 10 24 75 9
