#!/bin/bash
gcc --shared -o /$PWD/librand.so mylib.c 
 LD_PRELOAD=/$PWD/librand.so
