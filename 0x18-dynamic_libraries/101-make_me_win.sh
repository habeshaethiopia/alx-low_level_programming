#!/bin/bash
gcc --shared -o /$PWD/libcrack.so mylib.c 
 LD_PRELOAD=/$PWD/libcrack.so ./gm 9 8 10 24 75 9
